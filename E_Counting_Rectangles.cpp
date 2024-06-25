#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int n;
   cin>>n;
   int q;
   cin>>q;
   
   int my[n*2];
   int qu[q*4];
   
   forl(i,0,n*2){
      cin>>my[i++]>>my[i];
   }
   forl(i,0,q*4){
      cin>>qu[i++]>>qu[i++]>>qu[i++]>>qu[i];
   }
   int ans;
   forl(i,0,q*4){
      ans=0;

      forl(j,0,n*2){
         if((qu[i]<my[j] && qu[i+1]<my[j+1]) && (qu[i+2]>my[j] && qu[i+3]>my[j+1])){
            ans+=my[j]*my[j+1];
         }
         j++;
      }
      i++;i++;i++;
      cout<<ans<<endl;
   }

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