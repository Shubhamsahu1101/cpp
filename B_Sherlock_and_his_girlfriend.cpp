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
vector<bool> isPrime(100001, true);
void solve(){
    int l;
    cin>>l;
    if(l==1){
        cout<<1<<endl<<1<<endl;return;
    }
    if(l==2){
        cout<<1<<endl<<1<<" "<<1<<endl;return;
    }
    cout<<2<<endl;
    for (int i = 2; i <= l+1; i++) {
        if (isPrime[i]) cout << 1 << " ";
        else cout << 2 << " ";
    }
    cout << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; p * p <= 100001; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= 100001; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for(int tc= 0; tc < t; tc++){
        solve();
    }

    return 0;
}