#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int c=0,l,k;
    string str;
    cin>>l>>k>>str;
    int cnt[26]={0};
    for (int i = 0; i < l; i++)
    {
        if(str[i]>96){
            if(cnt[str[i]-97]<0){
                cnt[str[i]-97]++;c++;
            }
            else{
                cnt[str[i]-97]++;
            }
        }
        else{
            if(cnt[str[i]-65]>0){
                cnt[str[i]-65]--;c++;
            }
            else{
                cnt[str[i]-65]--;
            }
        }
        // cout<<cnt[str[i]-97]<<endl;
    }
    for (int i = 0; i < 26 && k>0; i++)
    {
        // cout<<cnt[i]<<endl;
       if(cnt[i]>=2){
        cnt[i]-=2;c++;k--;i--;
        // cout<<cnt[i]<<endl;
       }
       else if(cnt[i]<=-2){
        cnt[i]+=2;c++;k--;i--;
       }
    }
    cout<<c<<endl;
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