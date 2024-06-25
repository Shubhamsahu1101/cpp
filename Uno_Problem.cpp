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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int x=1;
        int z=1;
        forl(i,0,s.size())
        {
            if(z){
                if(s[i]=='U')
                {
                    x++;
                }
                if(s[i]=='S')
                {
                    x+=2;
                }
                if(s[i]=='R')
                {
                    x--;
                    z=0;
                }
            }
            else{
                if(s[i]=='U')
                {
                    x--;
                }
                if(s[i]=='S')
                {
                    x-=2;
                }
                if(s[i]=='R')
                {
                    x++;
                    z=1;
                }
            }
            if(x==0)
            {
                x=n;
            }
            else if(x==-1)
            {
                x=n-1;
            }
            else if(x==-2)
            {
                x=n-2;
            }
            else if(x==n+1)
            {
                x=1;
            }
            else if(x==n+2)
            {
                x=2;
            }
            else if(x==n+3)
            {
                x=3;
            }
            
        }
        cout<<x<<endl;
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