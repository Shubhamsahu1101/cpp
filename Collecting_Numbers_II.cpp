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
    int l,n;
    cin>>l>>n;
    int t;
    map<int,int> m;
    vector<int> ini(l+2);ini[0]=ini[m.size()+1]=0;
    forl(i,1,l+1){
        cin>>t;
        ini[i]=t;
        m[t]=i;
    }
    int c=1;
    vector<int> v(m.size()+2);v[0]=v[m.size()+1]=0;
    vector<int> prev(m.size()+2);prev[0]=prev[m.size()+1]=0;
    vector<int> next(m.size()+2);next[0]=next[m.size()+1]=0;
    
    auto it=m.begin();
    forl(i,1,m.size()+1){
        v[i]=it->second;
        it++;
    }
    forl(i,1,m.size()+1){
        if(v[i]>v[i-1]) prev[i]=1;
        else prev[i]=0;
        if(v[i]<v[i+1]) next[i]=1;
        else next[i]=0;
    }
    forl(i,1,m.size()+2){
        c+=prev[i];
    }
    cout<<m.size()<<endl;
    print(v);
    print(prev);
    print(next);
    int a,b;
    forl(i,0,n){
        cin>>a>>b;
        int temp=v[ini[a]];
        v[ini[a]]=v[ini[b]];
        v[ini[b]]=temp;
        temp=ini[a];
        ini[a]=ini[b];
        ini[b]=temp;

        
    }
    cout<<c<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}