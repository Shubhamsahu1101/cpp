#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int l,t;
   cin>>l;
   int arr[l]={0};

   forl(i,0,l){
    cin>>t;
    if(t>l) continue;
    arr[t-1]++;
   }
   int x=1,ans=0;
//    forl(i,0,l){
//     cout<<arr[i]<<" ";
//    }cout<<endl;
   forl(i,0,l){
    if(!arr[i]) break;
    else if(arr[i]>1) x*=arr[i];
    x%=1000000007;
    arr[i]=x;
    ans+=x;
   }
//    forl(i,0,l){
//     cout<<arr[i]<<" ";
//    }cout<<endl;
   ans%=1000000007;
   cout<<ans<<endl;
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