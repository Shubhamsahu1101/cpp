#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define M 1000000007
using namespace std;
int arr[100005]={1};
int arrx[100005]={1};
int power(int a,int b)
{
    if(b==0)
        return 1;
    else
    {
        int x=power(a,b/2);
        int y=(x*x)%M;
        if(b%2) y=(y*a)%M;
        return y;
    }
}
void solve(){
    int l;
    cin>>l;
    map<int,int> m;
    int x,y;
    forl(i,0,l){
        cin>>x>>y;
        m[x]++;
    }
    int num=1;
    forall(it,m){
        num=(num*arr[it->second])%M;
    }
    // int den=1;
    // den=arr[l];
    int ans=(num*(arrx[l]))%M;
    cout<<ans<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    forl(i,1,100001){
        arr[i]=arr[i-1]*i;
    }
    forl(i,1,100001){
        arrx[i]=power(arr[i],M-2);
    }
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}