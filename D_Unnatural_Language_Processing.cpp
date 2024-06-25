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
    cin>>l;
    string s;
    cin>>s;
    string ans="";
    int j=0;
    forl(i,1,l){
        if((s.at(i)=='a' || s.at(i)=='e')){
            if(i-j>2){
                ans+=s.at(j+1);
                ans+='.';
            }
            else{
                if(i!=1) ans+='.';
            }
            j=i;
            ans+=s.at(i-1);
            ans+=s.at(i);
        }
        else if(i==l-1){
            ans+=s.at(i);
        }
        // if((s.at(i)=='a' || s.at(i)=='e') && (s.at(i+1)=='b' || s.at(i+1)=='c' || s.at(i+1)=='d'))
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