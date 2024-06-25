#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int l;
    cin>>l;
    string s;
    cin>>s;
    int ans=0;
    int x=0;
    while(x<l){
        int m=0,a=0,p=0,i=0,e=0;
        if(x<l && s.at(x)=='m'){
            m=0,a=0,p=0,i=0,e=0;
            while(x<l && s.at(x)=='m'){
                m++;x++;
            }
            while(x<l && s.at(x)=='a'){
                a++;x++;
            }
            while(x<l && s.at(x)=='p'){
                p++;x++;
            }
            while(x<l && s.at(x)=='i'){
                i++;x++;
            }
            while(x<l && s.at(x)=='e'){
                e++;x++;
            }
            if(m!=0 && a==1 && p!=0 && i==1 && e!=0){
                int z=INT_MAX;
                z=min(z,p);
                z=min(z,m+e);
                z=min(z,m+i);
                z=min(z,a+i);
                z=min(z,a+e);
                ans+=z;
            }
            else if(m!=0 && a==1 && p!=0){
                int z=INT_MAX;
                z=min(z,p);
                z=min(z,m);
                z=min(z,a);
                ans+=z;
            }
            else if(p!=0 && i==1 && e!=0){
                int z=INT_MAX;
                z=min(z,p);
                z=min(z,i);
                z=min(z,e);
                ans+=z;
            }
        }
        else if(x<l && s.at(x)=='p'){
            m=0,a=0,p=0,i=0,e=0;
            while(x<l && s.at(x)=='p'){
                p++;x++;
            }
            while(x<l && s.at(x)=='i'){
                i++;x++;
            }
            while(x<l && s.at(x)=='e'){
                e++;x++;
            }
            if(p!=0 && i==1 && e!=0){
                int z=INT_MAX;
                z=min(z,p);
                z=min(z,i);
                z=min(z,e);
                ans+=z;
            }
        }
        else x++;
    }
    cout<<ans<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}