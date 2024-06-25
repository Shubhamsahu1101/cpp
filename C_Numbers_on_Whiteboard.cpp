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
 
//*********MAIN CODE********
 
void solve()
{
        int x;
        cin>>x;
       
        
          
        
        // forl(i,0,v.size())
        // {
        //     cout<<v[i]<<endl;
        // }
      cout<<2<<endl;
       
        { int a=x;
        cout<<x<<" "<<x-2<<endl;
        cout<<x-1<<" "<<x-1<<endl;
      a=x-1;
       
        while(a!=2)
        {
           
            cout<<a<<" "<<a-2<<endl;
            a--;
        }
       
           
           
            // cout<<a<<b<<endl;
        }
       

       
        // forl(i,0,even.size())
        // {
        //     cout<<even[i]<<endl;
        // }
        //  forl(i,0,odd.size())
        // {
        //     cout<<odd[i]<<endl;
        // }
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