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
int cal(int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res += i;
    return res;
}
void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    int arr[n];
    forl(i,0,n){
        cin>>arr[i];
    }
    int i=0,c=0;
    vector<int> ans;
    while(i<n){
        c=0;
        while(i<n && arr[i]<=q){
            i++;
            c++;
        }
        i++;
        if(c) ans.pb(c);
    }
    int total=0;
    forl(i,0,ans.size()){
        if(k<=ans[i]) total+=cal(ans[i]-k+1);
    }
    // print(ans);
    cout<<total<<endl;
    // cout<<endl;
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