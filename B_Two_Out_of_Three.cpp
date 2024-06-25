#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    int l;
    cin>>l;
    int t;
    int arr[l];
    map<int,int> m;
    forl(i,0,l){
        cin>>t;
        arr[i]=t;
        m[t]++;
    }
    int a=-1,b=-1;
    forall(it,m){
        if(it->second>1 && a==-1) a=it->first;
        else if(it->second>1 && b==-1) b=it->first;
    }
    if(a==-1 || b==-1){
        cout<<-1<<endl;
        return;
    }
    bool x=true,y=true;
    forl(i,0,l){
        if(arr[i]==a){
            if(x){
                cout<<1<<" ";
                x=false;
            }
            else cout<<2<<" ";
        }
        else if(arr[i]==b){
            if(y){
                cout<<1<<" ";
                y=false;
            }
            else cout<<3<<" ";
        }
        else cout<<1<<" ";
    }cout<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}