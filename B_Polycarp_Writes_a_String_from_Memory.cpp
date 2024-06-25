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
    set<char> st;
    int c=0;
    forl(i,0,str.length()){
        if(st.find(str.at(i))==st.end() && st.size()==3){
            c++;st.erase(st.begin(),st.end());
        }
        st.insert(str.at(i));
        // cout<<str.at(i)<<" "<<st.size()<<endl;
    }
    if(st.size()>0) c++;
    cout<<c<<endl;
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