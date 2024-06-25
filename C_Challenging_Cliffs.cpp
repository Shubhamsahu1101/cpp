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

void solve(){
    int l,t;
    cin>>l;
    map<int,int> m;
    forl(i,0,l){
        cin>>t;
        m[t]++;
    }
    int s=-1,e=-2;
    forall(it,m){
        if(it->second>1){
            s=it->first;e=it->first;
            it->second-=2;
            break;
        }
    }
    if(s!=e){
        forall(it,m){
            if(it->second){
                if(s==-1 && it->second){
                    s=it->first;
                    it->second--;
                }
                else if(e==-2 && it->second){
                    e=it->first;
                    it->second--;
                    break;
                }
            }
        }
    }
    cout<<s<<" ";
    auto it=m.find(s);
    while(it!=m.end()){
        while(it->second){
            cout<<it->first<<" ";
            it->second--;
        }
        it++;
    }
    auto ch=m.find(e);
    ch++;
    it=m.begin();
    while(it!=ch){
        while(it->second){
            cout<<it->first<<" ";
            it->second--;
        }
        it++;
    }
    cout<<e<<endl;
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