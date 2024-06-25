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
    int l;
    string s;
    cin>>l;
    cin>>s;
    stack<char> dec;
    bool x=false;
    char start='.';
    int z=0;
    forl(i,0,l){
        if(dec.empty()){
            dec.push(s.at(i));
        }
        else{
            if(dec.empty()){
                dec.push(s.at(i));
            }
            else{
                int c=dec.size();
                if(dec.top()<s.at(i) && start=='.'){
                    start=dec.top();
                }
                if(dec.top()<s.at(i)) z++;
                while(!dec.empty() && dec.top()<s.at(i)) dec.pop();
                int d=dec.size();
                if(c>1 && d==0){
                    x=true;
                }
                dec.push(s.at(i));
            }
        }
    }
    if((dec.size()==1 && dec.top()==s.at(l-1) && dec.top()<=start) || dec.empty()){
        cout<<0<<endl;
    }
    else if(x){
        cout<<-1<<endl;
    }
    else if(dec.top()<=start){
        cout<<dec.size()<<endl;
    }
    else{
        cout<<dec.size()-1<<endl;
    }
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