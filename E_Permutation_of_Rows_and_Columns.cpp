#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define yes cout<<"YES"<<endl; return;
#define no cout<<"NO"<<endl; return;
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin>>n>>m;
    int a[n][m];
    int b[n][m];
    forl(i,0,n){
        forl(j,0,m){
            cin>>a[i][j];
        }
    }
    forl(i,0,n){
        forl(j,0,m){
            cin>>b[i][j];
        }
    }

    set<set<int> > rows;
    forl(i,0,n){
        set<int> temp;
        forl(j,0,m){
            temp.insert(b[i][j]);
        }
        rows.insert(temp);
    }
    forl(i,0,n){
        set<int> temp;
        forl(j,0,m){
            temp.insert(a[i][j]);
        }
        if(rows.find(temp)==rows.end()) {
            no;
        }
    }

    set<set<int> > cols;
    forl(j,0,m){
        set<int> temp;
        forl(i,0,n){
            temp.insert(b[i][j]);
        }
        cols.insert(temp);
    }
    forl(j,0,m){
        set<int> temp;
        forl(i,0,n){
            temp.insert(a[i][j]);
        }
        if(cols.find(temp)==cols.end()) {
            no;
        }
    }

    yes;
    
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}