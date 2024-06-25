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
    stack<char> st;
    forl(i,0,str.length()){
        if(str.at(i)=='s' || str.at(i)=='e' || str.at(i)=='Y'){
            if(st.empty()) st.push(str.at(i));
            else if(str.at(i)=='e'){
                if(st.top()=='Y') st.push(str.at(i));
                else{
                    no;return;
                }
            }
            else if(str.at(i)=='s'){
                if(st.top()=='e') st.push(str.at(i));
                else{
                    no;return;
                }
            } 
            else if(str.at(i)=='Y'){
                if(st.top()=='s') st.push(str.at(i));
                else{
                    no;return;
                }
            }
            else{
                no;return;
            }
        }
        else{
            no;return;
        }
    }
    yes;
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