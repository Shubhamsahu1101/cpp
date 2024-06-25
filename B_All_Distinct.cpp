#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    set<int> st;
    int t,c=0;
    forl(i,0,l){
        cin>>t;
        if(st.find(t)==st.end()){
            st.insert(t);
        }
        else c++;
    }
    if(c%2==0) cout<<st.size()<<endl;
    else cout<<st.size()-1<<endl;
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