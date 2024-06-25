#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    string s;
    char ans='.';
    set<char> st;
    forl(i,0,3){
        cin>>s;
        forl(j,0,3){
            st.insert(s.at(j));
        }
        if(st.find('A')==st.end() && ans=='.'){
            ans='A';
        }
        if(st.find('B')==st.end() && ans=='.'){
            ans='B';
        }
        if(st.find('C')==st.end() && ans=='.'){
            ans='C';
        }
        st.clear();
    }
    cout<<ans<<endl;
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