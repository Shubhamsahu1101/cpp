#include <bits/stdc++.h>
using namespace std;
void solve(){
    set<char> sums;
    string line;
    int n,balloons=0;
    cin>>n>>line;
    while(n--){
        auto it = sums.find(line[n]);
        if(it==sums.end()){
            balloons+=2;
            sums.insert(line[n]);
        }
        else balloons+=1;
    }
    cout<<balloons<<endl;
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