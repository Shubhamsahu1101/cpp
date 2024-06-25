#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    int arr[2*l];
    forl(i,0,2*l){
        cin>>arr[i];
    }
    sort(arr,arr+2*l);
    // forl(i,0,2*l){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    long double x=1.0;
    long double bal=(x*(arr[0]+arr[2*l-1]))/2;
    // cout<<bal<<endl;
    forl(i,0,l){
        // cout<<(x*(arr[l-i-1]+arr[l+i]))/2<<endl;
        if((x*(arr[l-i-1]+arr[l+i]))/2==bal) continue;
        else{
            cout<<"IMBALANCED"<<endl;return;
        }
    }
    cout<<"PERFECT"<<endl;

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