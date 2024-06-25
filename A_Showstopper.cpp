#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i > b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define cout(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    int l; cin>>l;
    int arr1[l];
    int arr2[l];
    forl(i,0,l){
        cin>>arr1[i];
    }
    forl(i,0,l){
        cin>>arr2[i];
    }
    int max1=INT64_MIN,max2=INT64_MIN,a=INT64_MIN,b=INT64_MIN;
    forl(i,0,l){
        a=min(arr1[i],arr2[i]);
        b=max(arr1[i],arr2[i]);
        max1=max(max1,a);
        max2=max(max2,b);
    }
    // cout<<max1<<" "<<max2<<endl;
    // cout<<min(arr1[l-1],arr2[l-1])<<" "<<max(arr1[l-1],arr2[l-1])<<endl;
    if(max1<=min(arr1[l-1],arr2[l-1]) && max2<=max(arr1[l-1],arr2[l-1])){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
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