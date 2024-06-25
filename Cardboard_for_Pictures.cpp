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
  double n,c1;
  double a=0,b=0,c=0;
  cin>>n>>c1;
  forl(i,0,n)
  {
    int x;
    cin>>x;
    c+=x*x;
    b += 4 * x;
  }
  c=c-c1;
  double l = n * 2 * 2;
  double k = 4 * l * c;
  double s=(b * b - k);
  if(s>0)
  {
    int w1 = (-1*b + sqrt(s)) / (2 * l);
    int w2 = (-1*b - sqrt(s)) / (2 * l);
    cout<<max(w1,w2)<<endl;
  }
  else{
    int w1 = (-1*b + sqrt(s)) / (2 * l);
    cout<<w1<<endl;
  }
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