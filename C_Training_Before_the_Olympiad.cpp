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
    int l;
    cin>>l;
    int arr[l];
    int o[l];
    int e[l];
    int p[l];
    int oc=0,ec=0;
    forl(i,0,l){
        cin>>arr[i];
        if(arr[i]%2==0) ec++;
        else oc++;
        o[i]=oc;
        e[i]=ec;
        if(i==0){
            p[i]=arr[i];
        }
        else{
            p[i]=arr[i]+p[i-1];
        }
    }
    forl(i,0,l){
        int t=p[i];
        int moves=i;
        if(moves==0){
            cout<<t<<" ";
            continue;
        }
        else if(moves==1){
            if(o[i]==1) cout<<t-1<<" ";
            else cout<<t<<" ";
            continue;
        }
        int x1=moves/2;
        int x2=o[i]/3;

        if(o[i]%3==1){
            t-=1;
        }

        t-=min(x1,x2);
        cout<<t<<" ";
    }
    cout<<endl;
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