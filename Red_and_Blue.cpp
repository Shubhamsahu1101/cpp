#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    string str;
    cin>>str;
    int arr[l];
    forl(i,1,l){
        cin>>arr[i];
    }
    // str.replace(2,1,"R");
    // cout<<str;
    int s=-1,e=0;
    while(e<l){
        while(e<l && str.at(e)!='R'){
            e++;
        }
        cout<<s<<" "<<e<<endl;
        cout<<e-s<<endl;
        if(e-s>1){
            forl(i,s+1,s+arr[s]){
                cout<<i;
                str.replace(i,1,"R");
            }
        }
        cout<<str<<endl;
        s=e;
        e++;
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