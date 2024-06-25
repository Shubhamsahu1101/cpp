#include <bits/stdc++.h>
#define int long long int
using namespace std;
// int gcd(int a, int b)
// {
//     int temp;
//     while(b!=0){
//         temp=b;
//         b=a%b;
//         a=temp;
//     }return a;
// }
void solve()
{
    int n, ans = -1;
    cin >> n;
    int arr[n],temp;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        if(mp.find(temp)==mp.end()){
            mp[temp]=i+1;
        }
        else{
            mp.find(temp)->second=(i+1);
        }
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        for(auto ite=mp.begin();ite!=mp.end();ite++){
            if (__gcd(it->first,ite->first) == 1){
                // cout<<it->second<<" "<<ite->second<<endl;
                ans = max(it->second+ite->second, ans);
            }
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        solve();
    }
    return 0;
}