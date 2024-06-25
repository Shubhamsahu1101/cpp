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
    cin>>s;
    string ans="";
    vector<char> v;
    stack<int> vlc;
    stack<int> vuc;
    forl(i,0,s.size()){
        if(s.at(i)=='b'){
            if(!vlc.empty()){
                v[vlc.top()]='-';
                vlc.pop();
            }
            v.pb(s.at(i));
            continue;
        }
        else if(s.at(i)=='B'){
            if(!vuc.empty()){
                v[vuc.top()]='-';
                vuc.pop();
            }
            v.pb(s.at(i));
            continue;
        }
        if(s.at(i)<97) vuc.push(i);
        else vlc.push(i);
        v.pb(s.at(i));
    }
    forl(i,0,v.size()){
        if(v.at(i)=='b' || v.at(i)=='B' || v.at(i)=='-') continue;
        cout<<v.at(i);
    }cout<<endl;
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