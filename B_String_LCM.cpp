#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i > b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define cout(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    string s1,t1;
    string s2,t2;
    cin>>s1>>s2;
    t1=s1,t2=s2;
    int x=(s1.size()*s2.size())/__gcd(s1.size(),s2.size());
    int i=(x/s1.size())-1;

    while(i--){
        s1+=t1;
    }
    i=(x/s2.size())-1;
    while(i--){
        s2+=t2;
    }
    if(!s1.compare(s2)) cout<<s1<<endl;
    else cout<<-1<<endl;
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