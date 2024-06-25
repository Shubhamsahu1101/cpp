#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
int M=1e9+7;
int arr[300005];

void solve() {
    int n,k,t1,t2;
    cin>>n>>k;
    forl(i,0,k){
        cin>>t1>>t2;
        if(t1==t2) n--;
        else {
            n--;n--;
        }
    }
    cout<<arr[n]<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    arr[0]=1;
    arr[1]=1;
    arr[2]=3;
    forl(i,3,300005){
        int sum=0;
        int twos=(i-1)*2;
        twos%=M;
        twos*=arr[i-2];
        twos%=M;
        // if(i==3) cout<<twos<<endl;
        sum+=arr[i-1];
        sum%=M;
        sum+=twos;
        sum%=M;
        arr[i]=sum;
    }
    // forl(i,0,20){
    //     cout<<arr[i]<<"  ";
    // }cout<<endl;
    while(t--) solve();
    return 0;
}