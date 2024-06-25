#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

bool check(string& s, int i, int n, int k){
    if(i==n) return false;
    char c='.';
    while(i<n){
        if(s.at(i)!=c){
            c=s.at(i);
            i+=k;
        }
        else return false;
    }
    return true;
}

int last(string& s, int n){
    int i=n-1, c=1;
    while(i>0 && s.at(i)==s.at(i-1)) {
        c++; i--;
    }
    return c;
}

void solve() {
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    forl(i,0,n){
        bool f=true;
        bool ans=false;
        cout<<check(s, i+1, n, k)<<endl;
        cout<<" last "<<last(s, n)<<endl;

        if(check(s, i+1, n, k)){
            int a=last(s, n);
            if(a==k || a==0) f=false;
            int c=0,j=i,prev=-1;
            while(j>0){
                if(f){
                    if(s.at(j)!=prev){
                        prev=s.at(j);
                        j-=a;
                    }
                    else{
                        cout<<-1<<endl;
                        ans=true;
                        return;
                    }
                    f=false;
                }
                else{
                    if(s.at(j)!=prev){
                        prev=s.at(j);
                        j-=k;
                    }
                    else{
                        cout<<-1<<endl;
                        ans=true;
                        return;
                    }
                }
            }
        }
        if(!ans){
            cout<<i<<endl;
            return;
        }
    }

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}