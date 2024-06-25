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
bool sortBySecond(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}
bool sortBySecond2(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first < b.first;
}
void solve(){
    int m,n;
    cin>>m>>n;
    set<int,greater<int>> st;
    int t;
    forl(i,0,m){
        cin>>t;
        st.insert(t);
    }
    map<int,int> mp;
    
    forl(i,1,m+1){
        mp[i]=0;
    }
    int a,b;
    
    int h=0;
    forl(i,0,n){
        cin>>a>>b;
        forl(i,a,b+1){
            mp[i]++;
        }
    }
    auto i=st.begin();
    
    vector<pair<int, int>> vec(mp.begin(), mp.end());
    
    sort(vec.begin(), vec.end(), sortBySecond);
    // forall(it,vec){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    int x=0;
    int sum=0;
    forall(it,vec){
        x=it->second;
        sum+=x*(*i);
        it->second=*i++;
    }
    sort(vec.begin(), vec.end(), sortBySecond2);
    // forall(it,vec){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    vector<int> ansarr;
    forall(it,vec){
        ansarr.pb(it->second);
    }
    
    cout<<sum<<endl;
    print(ansarr);
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