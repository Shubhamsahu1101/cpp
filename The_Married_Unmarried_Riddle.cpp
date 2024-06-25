#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if(s.at(i)=='M'){
            if(st.empty()) st.push('M');
            if(st.top()=='M') continue;
            else if(st.top()=='?') st.pop();
            else st.push('M');
        }
        else if(s.at(i)=='?'){
            if(st.empty()) continue;
            else if(st.top()=='M') st.push('M');
        }
        else if(s.at(i)=='U'){
            if(st.empty()) continue;
            else{
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        solve();
    }
    return 0;
}
