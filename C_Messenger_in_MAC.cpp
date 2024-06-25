#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define ll long long
using namespace std;

void solve(){
    int l,n;
    cin>>l>>n;
    vector<pair<int,int>> v;
    int a,b;
    forl(i,0,l){
        cin>>a>>b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    // forall(it,v){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    int bdiff=0,asum=0,ans=-1;
    forl(s,0,l){
        multiset<int> st;
        asum=0;
        forl(e,s,l){
            st.insert(v[e].second);
            asum+=v[e].second;
            bdiff=v[e].first-v[s].first;
            while(!st.empty() && bdiff+asum>n){
                int max_value = *st.rbegin();
                asum-=max_value;
                st.extract(max_value);
            }
            ans=max(ans,(int)st.size());
        }
    }
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}