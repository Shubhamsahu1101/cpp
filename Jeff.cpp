#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l,j;
    cin>>l>>j;
    string str; cin>>str;
    int i=-1;j--;
    while(j<l && i<j){
        if(j==l){
            cout<<"JAY"<<endl;
            return;
        }
        i++;
        if(j+1!=l && str.at(j+1)=='#'){
            str.at(j+1)='.';
            //  cout<<"deb ";
        }
        else{
            j++;
        }
        // cout<<i<<" "<<j<<endl;
        if(i==j){
            cout<<"JEFF"<<endl;
            return;
        }
    }
    if(j==l) cout<<"JAY"<<endl;
    else cout<<"JEFF"<<endl;

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