#include <bits/stdc++.h>
 
#define pb push_back
#define int long long
#define rsrt(a,n) sort(a,a+n,greater<int>())
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
//********MAIN CODE*******
 
void solve()
{
        int x;
        cin>>x;
         int ans=0,ans1=0;
        forl(i,0,x)
        {ans=0;
            int t,y,u;
            cin>>t>>y>>u;
            if(t==1)
            {
                ans++;
            }
            if(y==1)
            {
                ans++;
            }
            if(u==1)
            {
                ans++;
            }
            // cout<<ans<<endl;
            if(ans>=2)
            {
                ans1++;
            }
        }
           
                cout<<ans1<<endl;
            // }
        
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    //  cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}