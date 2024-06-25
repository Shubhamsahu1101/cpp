#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    int a[n+m+1];
    int b[m+n+1];
    forl(i,0,n+m+1) {
        cin>>a[i];
    }
    forl(i,0,m+n+1) {
        cin>>b[i];
    }
    int sum=0,x=n,y=m;
    int thold=-1; char filled;
    int hirea[n+m+1]={0};
    int hireb[n+m+1]={0};
    forl(i,0,n+m){
        if(x>0 && y>0) {
            if(a[i]>b[i]) {
                sum+=a[i];x--;
                hirea[i]=1;
            } else {
                sum+=b[i];y--;
                hireb[i]=1;
            }
        } else if(x>0) {
            sum+=a[i];x--;
            hirea[i]=1;
        } else if(y>0) {
            sum+=b[i];y--;
            hireb[i]=1;
        }
        if(x==0 || y==0) {
            if(thold==-1) {
                thold=i;filled= x==0? 'a':'b';
            }
        }
    }
    int nxt=-1;
    if(filled=='b')
        forl(i,thold+1,n+m+1) {
            if(b[i]>a[i]) {
                nxt=i;break;
            }
        }
    if(filled=='a')
        forl(i,thold+1,n+m+1) {
            if(a[i]>b[i]) {
                nxt=i;break;
            }
        }
    if(nxt==-1) nxt=n+m;
    
    // cout<<thold<<" "<<filled<<" "<<nxt<<" "<<sum<<endl;
    forl(i,0,n+m+1){
        int ans=sum;
        if(i>thold) {
            if(filled=='a'){
                    ans-=b[i];
                    ans+=b[n+m];
                cout<<ans<<" ";
            } else {
                    ans-=a[i];
                    ans+=a[n+m];
                cout<<ans<<" ";
            }
        }
        else{
            char tofill;
            if(hirea[i]) tofill='a';
            else tofill='b';
            if(tofill!=filled){
                if(filled=='a'){
                    ans-=b[i];
                    ans+=b[n+m];
                    cout<<ans<<" ";
                } else {
                    ans-=a[i];
                    ans+=a[n+m];
                    cout<<ans<<" ";
                }
            }
            else {
                if(filled=='a'){
                    if(hirea[i]) ans-=a[i];
                    else ans-=b[i];
                    ans-=b[nxt];
                    ans+=a[nxt];
                    ans+=b[n+m];
                    cout<<ans<<" ";
                } else {
                    if(hirea[i]) ans-=a[i];
                    else ans-=b[i];
                    ans-=a[nxt];
                    ans+=b[nxt];
                    ans+=a[n+m];
                    cout<<ans<<" ";
                }
            }
        }
    }cout<<endl;

    

}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}