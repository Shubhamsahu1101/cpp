#include <bits/stdc++.h>
 
#define pb push_back
#define int long long
#define rsrt(a,n) sort(a,a+n,greater<int>())
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define M 1000000007
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
//MAIN CODE*******
 
void solve()
{
        int n,k;
        cin>>n>>k;
        int  health[n];
        int distance[n];
        forl(i,0,n)
        {
            cin>>health[i];
        }
        vector<pair<int,int>>v;
        forl(i,0,n)
        {
            cin>>distance[i];
            distance[i]=abs(distance[i]-0);
            v.pb({distance[i],health[i]});
        }
        
        sort(v.begin(),v.end());
        //  forl(i,0,n)
        // {
        //     // distance[i]=abs(distance[i]-0);
        //     cout<<distance[i]<<endl;
        // }
        int l=0;
        forl(i,0,n)
        {
            l=l+k;
            // cout<<l<<" ";
            
            // cout<<v[i].second<<" "<<v[i].first-i<<endl;
            if(l<v[i].second)
            {
                if(v[i].first-i==0)
                {
                    no;
                    return;
                }
            }
            if(l>=v[i].second)
            {
                l=l-v[i].second;
                continue;
            }
            else
            {
                no;
                return;
            }
        }
        yes;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
     cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}