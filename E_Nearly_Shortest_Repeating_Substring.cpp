#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

vector<vector<int>> f(200001);
void solve() {
    int l;
    cin>>l;
    int ans=l;
    string s;
    cin>>s;
    forl(i,0,f[l].size()){
        int div = f[l][i];
        // cout<<div<<endl;
        int c=0;
        forl(j,div,l){
            if(s.at(j)!=s.at(j%div)){
                c++;
            }
            if(c>1) break;
        }
        if(c<2){
            cout<<div<<endl;
            return;
        }
        c=0;
        forl(j,0,l){
            if(s.at(j)!=s.at(div+j%div)){
                c++;
            }
            if(c>1) break;
        }
        if(c<2){
            cout<<div<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    forl(i,1,200001){
        for(int j=i;j<200001;j+=i){
            f[j].push_back(i);
        }
    }
    while(t--) solve();
    return 0;
}