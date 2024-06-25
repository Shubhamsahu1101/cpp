#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    int l,t;
    cin>>l;
    set<int> st,diff;
    forl(i,0,l){
        cin>>t;
        st.insert(t);
    }
    if(st.size()==1){
        cout<<-1<<endl;
        return;
    }
    auto it=st.begin();
    t=*it++;
    while(it!=st.end()){
        diff.insert(*it-t);
        t=*it;
        it++;
    }
    int ans=0;
    forall(i,diff){
        ans=__gcd(ans,*i);
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