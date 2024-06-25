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
    int arr[l+1]={0};
    forl(i,1,l+1){
        cin>>arr[i];
        arr[i]=arr[i]+arr[i-1];
    }
    forl(i,0,l+1){
        cout<<arr[i]<<" ";
    }cout<<endl;
    int s=1,e=l,m,sum;
    while(s<e){
        m=s+(e-s)/2;
        cout<<"? ";
        forl(i,s,m+1){
            cout<<i<<" ";
        }cout<<endl;
        cout<<flush;
        cin>>sum;
        if(sum>(arr[m]-arr[s-1])){
            e=m;
        }
        else if(sum<(arr[m]-arr[s-1])){
            s=m+1;
        }
        else{
            cout<<"! "<<m;
        }
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