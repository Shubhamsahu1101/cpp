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

bool comp(const std::pair<int, int>& p1, const std::pair<int, int>& p2) {
    if (p1.first != p2.first) {
        return p1.first > p2.first;
    } else {
        return p1.second < p2.second;
    }
}

void solve(){
    int n,m,h,t;
    cin>>n>>m>>h;
    
    int a=-1,b=-1;

    vector<int> penalty;
    vector<pair<int,int>> ranking;
    
    int curr=0,solved=0,time=0;
    forl(i,0,n){
        penalty.clear();
        forl(j,0,m){
            cin>>t;
            penalty.pb(t);
        }
        sort(penalty.begin(),penalty.end());
        curr=0,solved=0,time=0;
        auto it=penalty.begin();

        forall(it,penalty){
            if(*it+time>h) break;
            curr+=(time+*it);
            time+=*it;
            solved++;
        }
        ranking.pb({solved,curr});

        if(i==0){
            a=solved;b=curr;
        }

    }
    
    sort(ranking.begin(),ranking.end(),comp);
    
    int c=0;
    forall(it,ranking){
        if(it->first==a && it->second==b) break;
        else c++;
    }
    cout<<++c<<endl;
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