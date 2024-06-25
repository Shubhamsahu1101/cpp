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
    int l,k;
    cin>>l>>k;
    int arr[l];
    forl(i,0,l){
        cin>>arr[i];
    }
    sort(arr,arr+l);
    if(k>2){
        cout<<0<<endl;
    }
    else if(k==2){
        int m=INT64_MAX;
        int n=INT64_MAX;
        forl(i,1,l){
            n=abs(arr[i]-arr[i-1]);
            forl(j,0,l){
                m=min(m,abs(arr[j]-n));
            }
        }
        forl(i,1,l){
            m=min(m,abs(arr[i]-arr[i-1]));
        }
        forl(i,0,l){
            m=min(m,arr[i]);
        }
        cout<<m<<endl;
    }
    else if(k==1){
        int m=INT64_MAX;
        forl(i,1,l){
            m=min(m,abs(arr[i]-arr[i-1]));
        }
        forl(i,0,l){
            m=min(m,arr[i]);
        }
        cout<<m<<endl;
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