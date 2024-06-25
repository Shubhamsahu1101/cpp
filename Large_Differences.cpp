#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    forl(i,0,n) cin>>arr[i];
    if(n==1){
        cout<<0<<endl;
        return;
    }
    if(n==2){
        cout<<max(max(abs(arr[0]-k),abs(arr[0]-1)), max(abs(arr[1]-k),abs(arr[1]-1)))<<endl;
        return;
    }
    
    int temp=-1;
    int temp1=-1;
    int ans=-1;
    vector<int> temparr=arr;
    vector<int> temparrk=arr;
    forl(i,0,n){
        temp=0;
        temp1=0;
        temparr[i]=1;
        temparrk[i]=k;
        forl(j,1,n){
            int t1=abs(temparr[j]-temparr[j-1]);
            int t2=abs(temparrk[j]-temparrk[j-1]);
            temp+=t1;
            temp1+=t2;
        }
        temparr[i]=arr[i];
        temparrk[i]=arr[i];
        ans=max(ans,temp);
        ans=max(ans,temp1);
    }
    
    
    cout<<ans<<endl;


}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}