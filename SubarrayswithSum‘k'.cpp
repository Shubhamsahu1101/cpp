#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {
    // Write your code here
    int l = a.size();
    multimap<int,int> m;
    int zero=0;
    m.insert({zero,zero-1});
    vector<vector<int>> ans;
    int csum=0;
    for(int i=0; i<l; i++){
        csum+=a[i];
        int val=csum-k;
        auto it=m.find(val);

        // cout<<"csum  "<<csum<<endl;

        while(it!=m.end() && it->first==val){
            int x=i-it->second;
            vector<int> t;
            for(int j=it->second+1;j<=i;j++){
                t.push_back(a[j]);
            }

            // for(auto p=t.begin(); p!=t.end(); p++){
            //     cout<<*p<<" ";
            // }cout<<endl<<it->second+1<<" "<<i<<"  vector"<<endl;

            ans.push_back(t);
            it++;
        }

        // for(auto p=m.begin(); p!=m.end(); p++){
        //     cout<<p->first<<" "<<p->second<<endl;
        // }cout<<"map"<<endl;

        m.insert({csum,i});
    }

    for(auto p=ans.begin(); p!=ans.end(); p++){
        for(auto p1=(*p).begin(); p1!=(*p).end(); p1++){
            cout<<*p1<<" ";
        }cout<<endl;
    }cout<<"ans"<<endl;

    return ans;
}
void solve() {
    int l;
    cin>>l;
    int k;
    cin>>k;
    vector<int> v(l);
    forl(i,0,l) cin>>v[i];
    subarraysWithSumK(v,k);
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}