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
    int n,k,l;
    cin>>n>>k>>l;
    string s;
    cin>>s;
    set<char> stt;
    
    string np="";
    int level=1, check=0;
    forl(i,0,l){
        stt.insert(s.at(i));
        if(stt.size()==k) {
            stt.clear();level++;
            np+=s.at(i);
        }
    }
    if(level<n+1){
        for(char c='a'; c<'a'+k; c++){
            if(stt.find(c)==stt.end()){
                no;
                while(np.size()<n) np.push_back(c);
                cout<<np<<endl;
                return;
            }
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