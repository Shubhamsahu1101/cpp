#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int l,m=0;
    string str;
    cin >> l >> str;
    set<char> st;
    int arr[l];
    forl(i,0,l){
        st.insert(str[i]);
        arr[i]=st.size();
    }
    st.clear();
    for(int i=l-1;i>0;i--){
        // cout<<i<<"a";
        st.insert(str[i]);
        if(st.size()+arr[i-1]>m) m=st.size()+arr[i-1];
        // cout<<arr[i]<<" ";
    }
    cout<<m<<endl;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int t=1;
   cin>>t;
   forl(tc, 0, t){
      solve();
   }
   return 0;
}