#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int s=0;
    if(x2>x1){
        if(y2>=(x2+y1-x1)){
            s+=(y2-y1);
            s+=(y2-y1-x2+x1);
            cout<<s<<endl;
        }
        else cout<<-1<<endl;
    }
    else if(x2<x1){
        if(y2>=y1){
            s+=2*(y2-y1);
            s+=(x1-x2);
            cout<<s<<endl;
        }
        else cout<<-1<<endl;
    }
    else if(y2>=y1){
        s+=2*(y2-y1);
        cout<<s<<endl;
    }
    else cout<<-1<<endl;
    
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