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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n);
    vector<int> v1(m);
    forl(i,0,n){
        cin>>v[i];
    }
    forl(i,0,m){
        cin>>v1[i];
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int c=0;
    int i=0,j=0;
    while(i<n && j<m){
        if(v[i]>=v1[j]-k && v[i]<=v1[j]+k){
            i++;
            j++;
            c++;
        }
        else if(v[i]<v1[j]-k) i++;
        else j++;
    }
    cout<<c<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}