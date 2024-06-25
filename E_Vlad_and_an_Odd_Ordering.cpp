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

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int nthOddNumber(int n) {
    return 2 * n - 1;
}

void solve(){
    int x;
    cin>>x;
    int l;
    cin>>l;

    int n;
    int ans=-1;
    int i=1;
    while(true){
        // if(!isPowerOfTwo(i)) continue;
        int t=x;
        t/=i;
        if(t%2==0){
            n=t/2;
        }
        else{
            n=t/2;
            n++;
        }
        // cout<<n<<" "<<l<< endl;

        if(l-n>0){
            l-=n;
        }
        else{
            ans = nthOddNumber(l)*i;
            break;
        }
        i*=2;
    }
    cout<<ans<<endl;
    // cout<<endl;
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