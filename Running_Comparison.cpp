#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int l,c=0;
   cin>>l;
   int arr1[l],arr2[l];
   forl(i,0,l){
    cin>>arr1[i];
   }
   forl(i,0,l){
    cin>>arr2[i];
   }
   forl(i,0,l){
    if(arr1[i]>2*arr2[i] || arr2[i]>2*arr1[i])continue;
    c++;
   }
   cout<<c<<endl;
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