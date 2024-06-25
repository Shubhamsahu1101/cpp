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
    string a,b,z="";
    cin>>a>>b;
    bool flag=false;
    forl(i,1,a.length()){
        if(a.at(i)==b.at(i) && a.at(i)=='0'){
            if(a.at(i+1)==b.at(i+1) && a.at(i+1)=='1'){
                yes;
                return;
            }
        }
    }
    forl(i,1,a.length()){
        if(a.at(i)!=b.at(i)) flag=true;
        if(a.at(i)==b.at(i) && a.at(i)=='1'){
            if(flag){
                no;
                return;
            }
            else{
                yes;
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