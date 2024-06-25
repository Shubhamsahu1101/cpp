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
    int a,b;
    cin>>a>>b;
    int x1,y1;
    cin>>x1>>y1;
    int x2,y2;
    cin>>x2>>y2;
    vector<pair<int,int>> v1;
    vector<pair<int,int>> v2;
    v1.pb(make_pair(x1+a,y1+b));
    v1.pb(make_pair(x1+a,y1-b));
    v1.pb(make_pair(x1-a,y1+b));
    v1.pb(make_pair(x1-a,y1-b));
    if(a!=b){
    v1.pb(make_pair(x1+b,y1-a));
    v1.pb(make_pair(x1+b,y1+a));
    v1.pb(make_pair(x1-b,y1+a));
    v1.pb(make_pair(x1-b,y1-a));
    }
    
    v2.pb(make_pair(x2+a,y2+b));
    v2.pb(make_pair(x2+a,y2-b));
    v2.pb(make_pair(x2-a,y2+b));
    v2.pb(make_pair(x2-a,y2-b));
    if(a!=b){
    v2.pb(make_pair(x2+b,y2-a));
    v2.pb(make_pair(x2+b,y2+a));
    v2.pb(make_pair(x2-b,y2+a));
    v2.pb(make_pair(x2-b,y2-a));
    }
    int c=0;
    forl(i,0,v1.size()){
        forl(j,0,v2.size()){
            if(v1[i]==v2[j]){
                c++;
                v1[i]=make_pair(-1,-1);
                v2[j]=make_pair(-2,-2);
            }
        }
    }
    cout<<c<<endl;
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