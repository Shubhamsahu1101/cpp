#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int l,t,x;
    cin>>l;
    
    vector<vector<int>> v;

    forl(i,0,l){
        cin>>t;
        v.push_back(vector<int>(t+1));
        v[i][0]=t;
        forl(j,1,t+1){
            cin>>x;
            v[i][j]=x;
        }
    }

    map<int,int> m;
    forl(i,0,l){
        t=v[i][0];
        forl(j,1,t+1){
            m[v[i][j]]++;
        }
    }
    map<int,int> m1=m;
    forl(i,0,l){
        t=v[i][0];
        bool f=false;
        forl(j,1,t+1){
            if(m[v[i][j]]==1){
                f=true;
                break;
            }
        }
        if(!f){
            cout<<"Yes"<<endl;
            return;
        }
    }
    
    cout<<"No"<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}