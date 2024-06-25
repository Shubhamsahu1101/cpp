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
    int arr1[l];
    int arr2[l];
    forl(i,0,l){
        cin>>arr1[i];
    }
    forl(i,0,l){
        cin>>arr2[i];
    }
    map<int,int> m1; 
    map<int,int> m2; 
    int x=0;
    int c=1;
    while(x<l){
        // m1[arr1[x]]=0;
        while(x<l-1 && arr1[x+1]==arr1[x]){
            x++;c++;
        }
        if(c>m1[arr1[x]]) m1[arr1[x]]=c;
        // cout<<x<<" "<<c<<endl;
        x++;
        c=1;
    }
    x=0;
    while(x<l){
        // m2[arr2[x]]=0;
        while(x<l-1 && arr2[x+1]==arr2[x]){
            x++;c++;
        }
        if(c>m2[arr2[x]]) m2[arr2[x]]=c;
        // cout<<x<<" "<<c<<endl;
        x++;
        c=1;
    }
    map<int,int> ans;
    forall(it,m1){
        ans[it->first]=ans[it->first]+it->second;
    }
    forall(it,m2){
        ans[it->first]=ans[it->first]+it->second;
    }
    int z=INT64_MIN;
    forall(it,ans){
        if(it->second > z) z=it->second;
    }

    cout<<z<<endl;


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