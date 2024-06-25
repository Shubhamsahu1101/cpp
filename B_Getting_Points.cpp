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
        int n,p,l,t;
        cin>>n>>p>>l>>t;
        int ans=INT_MIN;
        int k2=(n)/7;
        if(n%7!=0)
        {
            k2++;
        }
        int num1=0;
      if(k2%2==0)
      {
        num1=(l+t*2)*(k2/2);
      }else
      {
        num1=(l+t*2)*(k2/2)+(l+t);
      }int num2=0;

      if(num1>p)
      {
        int num2=p/(t*2+l);
        int t=p%(t*2+l);
        if(k2%2!=0 && t!=0){
            t-=(t+l);
            num2++;
        }
        if(t>0){
            int t1=t/l;
            num2+=t1;
            if(t%l){
                num2++;
            }
        }
        cout<<n-(num2)<<endl;
        return;
      }
    //   cout<<num1<<endl;
      num2=(p-num1)/l;
      if((p-num1)%l!=0)
      {
        num2++;
      }
    //   cout<<num2<<k2/2<<endl;
      cout<<n-(k2/2+num2)<<endl;

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