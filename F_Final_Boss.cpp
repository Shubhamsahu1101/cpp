#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

bool check(uint64_t mid, uint64_t h, uint64_t n, uint64_t arr[], uint64_t c[]) {
    uint64_t damage=0;
    forl(i, 0, n) {
        uint64_t in = mid / c[i];
        uint64_t rem = mid % c[i];
        if (rem != 0) {
            in++;
        }
        uint64_t damage_contribution = in * arr[i];
        
        if(damage_contribution==0 && in!=0 && arr[i]!=0)  {
            return true;
        }
        
        damage += damage_contribution;

        if (damage >= h) {
            return true;
        }
    }
    return damage >= h;
}


void solve() {
    uint64_t h, n;
    cin>>h>>n;
    uint64_t arr[n];
    uint64_t c[n];
    forl(i,0,n){
        cin>>arr[i];
    }
    forl(i,0,n){
        cin>>c[i];
    }
    map<int,int> mp;
    forl(i,0,n){
        mp[c[i]]+=arr[i];
    }
    uint64_t ub=INT64_MAX;
    uint64_t lb=1;
    int fans=0;
    while(lb<ub){
        uint64_t mid=(lb+ub)/2;
        bool check1=check(mid,h,n,arr,c);
        // cout<<lb<<" "<<ub<<" "<<mid<<" "<<check1<<endl;
        if(check1){
            ub=mid;
            fans=mid;
        }
        else{
            lb=mid+1;
        }
    }
    cout<<fans<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}