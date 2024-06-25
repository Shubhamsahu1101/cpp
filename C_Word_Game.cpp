#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int l,p1=0,p2=0,p3=0;
   cin>>l;
   string t;
   set<string> st1;
   set<string> st2;
   set<string> st3;
    forl(i,0,l){
        cin>>t;
        st1.insert(t);
    }
    forl(i,0,l){
        cin>>t;
        st2.insert(t);
    }
    forl(i,0,l){
        cin>>t;
        st3.insert(t);
    }
    // cout<<p1<<" "<<p2<<" "<<p3<<endl;
    auto it1=st1.begin();
    while(it1!=st1.end()){
        auto it2=st2.find(*it1);
        auto it3=st3.find(*it1);
        // cout<<*it1<<endl;
        
        string x;
        if(it2!=st2.end() && it3!=st3.end()){
            st2.erase(*it1);
            st3.erase(*it1);
            st1.erase(*it1);
            it1=st1.begin();
        }
        else if(it2!=st2.end()){
            st2.erase(*it2);
            st1.erase(*it1);
            p1++;p2++;
            it1=st1.begin();
        }
        else if(it3!=st3.end()){
            st3.erase(*it3);
            st1.erase(*it1);
            p1++;p3++;
            it1=st1.begin();
        }
        else it1++;
    }
    auto it2=st2.begin();
    while(it2!=st2.end()){
        auto it3=st3.find(*it2);
        if(it3!=st3.end()){
            st3.erase(*it3);
            st2.erase(*it2);
            p2++;p3++;
            it2=st2.begin();
        }
        else it2++;
    }
    // cout<<"ab"<<st1.size();
    p1+=st1.size()*3;
    p2+=st2.size()*3;
    p3+=st3.size()*3;
    cout<<p1<<" "<<p2<<" "<<p3<<endl;
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