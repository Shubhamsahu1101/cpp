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
int nCr(int n, int r)
{
    if(r>=n) return 1;
    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd 
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
 
    else
        p = 1;
 
    // if our approach is correct p = ans and k =1
    return p;
}

// Function to calculate the number of ways to split n into m parts, each at least 1
int splitIntoParts(int n, int m) {
    if(m==1) return 1;
    return nCr(n - m, m);
}

void solve(){
    int l,q;
    cin>>l>>q;
    int arr[l]={0};
    int t;
    forl(i,0,l){
        cin>>t;
        if(i==0){
            arr[i]=t;
        }
        else arr[i]=arr[i-1]+t;
    }
    int a,b;
    // printarr(arr);
    forl(i,0,q){
        cin>>a>>b;
        int z=0;
        int d=arr[a-2];
        if(a-2<0) d=0;
        int sum=arr[b-1]-d;
        // cout<<sum<<" "<<b-a+1<<" "<<splitIntoParts(sum,b-a+1)<<endl;
        if(splitIntoParts(sum,b-a+1)==1) no;
        else yes;
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