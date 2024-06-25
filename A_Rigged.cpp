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
 
//********MAIN CODE*******
 
void solve()
{
        int n;
        float start,start2;
        cin>>n;
        vector< pair <float,float> > v;
        vector<float>ans;
        forl(i,0,n)
        {
            int x,y;
            cin>>x>>y;
            v.pb(make_pair(x,y));
            if(i==0)
            {
                start=x;
                start2=y;
               
            }
            
           
        }
       int x=n;
       sort(v.begin(),v.end());
       int point=0;
       forl(i,0,x)
       {
        if(v[i].first==start && v[i].second==start2)
        {
            point=i;
            break;
        }
       }
       forl(i,point+1,x)
       {
          if(v[i].second>=start2)
          {
            cout<<-1<<endl;
            return;
          }
       }
       cout<<start<<endl;
       

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