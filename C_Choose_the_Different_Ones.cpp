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
    int n,m,l;
    cin>>n>>m>>l;
    int arr[n];
    forl(i,0,n){
        cin>>arr[i];
    }
    int arrz[m];
    forl(i,0,m){
        cin>>arrz[i];
    }
    map<int,int> mp;
    forl(i,0,n){
        if(arr[i]<=l) mp[arr[i]]=1;
    }
    forl(i,0,m){
        if(arrz[i]<=l){
            if(mp[arrz[i]]==1){
                mp[arrz[i]]=3;
            }
            else if(mp[arrz[i]]!=3){
                mp[arrz[i]]=2;
            }
        }
    }
    int a=0,b=0,c=0;
    forall(i,mp){
        if(i->second==1) a++;
        else if(i->second==2) b++;
        else if(i->second==3) c++;
    }
    // forall(i,mp){
    //     if(i->second==3){
    //         if(a>b) b++;
    //         else a++;
    //     }
    // }
    // forall(i,mp){
    //     cout<<i->first<<": "<<i->second<<endl;
    // }
    // cout<<a<<" "<<b<<" "<<c<<endl;
    if(a>l/2 || b>l/2){
        no;
        return;
    }
    if(a+b+c<l){
        no;
        return;
    }
    yes;
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