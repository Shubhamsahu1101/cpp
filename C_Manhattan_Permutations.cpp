#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    if(k%2!=0) {
        cout<<"No"<<endl;return;
    }
    int arr[n+1];
    forl(i,1,n+1){
        arr[i]=i;
    }
    int i=1,j=n;
    // printarr(arr);

    while(i<=j){
        // printarr(arr);
        // cout<<k<<endl;
        if(k==0){
            cout<<"Yes"<<endl;
            forl(i,1,n+1){
                cout<<arr[i]<<" ";
            }cout<<endl;
            return;
        }
        if(k<0) break;
        // cout<<k<<i<<j<<endl;
        if(((j-i)*2)<=k){
            swap(arr[i], arr[j]);
            k-=((j-i)*2);
            i++;j--;
        } else {
            i++;
        }
    }if(k==0){
            cout<<"Yes"<<endl;
            forl(i,1,n+1){
                cout<<arr[i]<<" ";
            }cout<<endl;
            return;
        }

    cout<<"No"<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}