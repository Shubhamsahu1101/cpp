#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    string str;
    cin>>str;
    int a=0,b=0,c=0;
    forl(i,0,str.length()){
        if(str.at(i)=='A') a++;
        else if(str.at(i)=='B') b++;
        else if(str.at(i)=='C') c++;
    }
    if(b==c+a) yes;
    else no;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
     cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}