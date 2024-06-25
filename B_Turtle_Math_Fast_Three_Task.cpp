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
    vector<int> a(l);
    forl(i,0,l){
        cin>>a[i];
        a[i]%=3;
    }
    int sum=0;
    int one=0,two=0,zero=0;
    forl(i,0,l){
        sum+=a[i];
        if(a[i]==0){
            zero++;
        }
        else if(a[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    if(sum%3==0){
        cout<<0<<endl;
        return;
    }
    sum%=3;
    if(sum==2){
        cout<<1<<endl;
        return;
    }
    if(sum==1){
        if(one>0) cout<<1<<endl;
        else cout<<2<<endl;
        return;
    }
    cout<<1<<endl;
    
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