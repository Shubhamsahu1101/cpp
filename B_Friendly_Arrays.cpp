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
    int a,b;
    cin>>a>>b;
    int arr1[a];
    forl(i,0,a) cin>>arr1[i];
    int arr2[b];
    forl(i,0,b) cin>>arr2[i];
    int x=0;
    int z=0;
    forl(i,0,a){
        x^=arr1[i];
    }
    forl(i,0,b){
        z|=arr2[i];
    }
    int m1=INT64_MAX;
    int m2=INT64_MIN;
    if(a%2==0){
        m2=x;
        forl(i,0,b){
            forl(j,0,32){
                if(z&(1<<j)){
                    x&=(~(1<<j));
                }
            }
        }
        m1=x;
    }
    else{
        m1=x;
        forl(i,0,b){
            forl(j,0,32){
                if(z&(1<<j)){
                    x|=(1<<j);
                }
            }
        }
        m2=x;
    }    
    cout<<m1<<" "<<m2<<endl;
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