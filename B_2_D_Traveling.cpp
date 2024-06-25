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
int cost(int a, int b, int x[], int y[]){
    return (abs(x[a]-x[b])+abs(y[a]-y[b]));
}
void solve(){
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    int x[n];
    int y[n];
    forl(i,0,n){
        cin>>x[i];
        cin>>y[i];
    }
    a--;b--;k--;
    int c=INT64_MAX;
    c=cost(a,b,x,y);
    if(a<=k && b<=k){
        cout<<0<<endl;
    }
    else if(a<=k && b>k){
        forl(i,0,k+1){
            c=min(c,cost(b,i,x,y));
        }
        cout<<c<<endl;
    }
    else if(b<=k && a>k){
        forl(i,0,k+1){
            c=min(c,cost(a,i,x,y));
        }
        cout<<c<<endl;
    }
    else{
        if(k==-1){
            cout<<c<<endl;
            return;
        }
        int c1=INT64_MAX;
        int c2=INT64_MAX;
        forl(i,0,k+1){
            c1=min(c1,cost(a,i,x,y));
        }
        forl(i,0,k+1){
            c2=min(c2,cost(b,i,x,y));
        }
        // cout<<c1<<endl;
        // cout<<c2<<endl;
        cout<<min(c,c1+c2)<<endl;
    }

    
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