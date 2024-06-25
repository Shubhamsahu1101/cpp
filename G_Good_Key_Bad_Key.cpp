#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
void solve(){
    int l;cin>>l;
    int cost;cin>>cost;
    vector<int> coins;

    int temp,loss=0,total=0,odd=0;
    for(int i=0;i<l;i++){
        cin>>temp;
        coins.push_back(temp);
    }

    int a=0,sm=0,m=INT64_MIN;
    forl(i,0,l+1){
        forl(j,0,i){
            sm+=coins.at(j)-cost;
        //    cout<<coins.at(j)<<" ";
        }
        forl(j,i,min(i+31,l)){
           sm+=coins.at(j)>>j-i+1;
        //    cout<<(coins.at(j)>>j-i+1)<<" ";
        }
        m=max(m,sm);sm=0;
    }
    cout<<m<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    forl(tc, 0, t){
        solve();
    }
    return 0;
}