#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s1,s2;
    cin>>s1;
    int ctr=0;
    s2="3141592653589793238462643383279";
    for (size_t i = 0; i < s1.length(); i++)
    {
        if(s1[i]==s2[i]) ctr++;
        else break;
    }cout<<ctr<<endl;
    

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