#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
void solve(){
    int n; cin >> n;
    string str; cin >> str;
    
    char c;
    set<char> st;
    bool flag=true;

    int s=0,e=0;
    while(s<n && e<n){
        while(e<n && str.at(e)!='W'){
            e++;
        }
        cout<<s<<" "<<e<<"   "<<endl;

        forl(i,s,e){
                if(str.at(i)!='W') st.insert(str.at(i));
            }
        cout<<"size "<<st.size()<<endl;

        if(st.size()==1){
            flag=false;
        }
        st.clear();
        s=e;e++;
    }

    if(flag) yes;
    else no;
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