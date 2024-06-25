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
    int arr[l];
    forl(i,0,l){
        cin>>arr[i];
    }
    forl(i,0,l){
        cout<<arr[i]<<" ";
    }cout<<endl;

    int s=0,e=l-1,c=0;
    int alice=0,bob=0;
    int aliceate=0,bobate=0;
    while(s<=e){
        cout<<endl;
        while(s<=e && aliceate<=bobate){
            aliceate+=arr[s];
            alice+=arr[s];
            cout<<"a  "<<alice<<endl;
            s++;
        }
        if(aliceate>0) c++;
        cout<<"aliceate  "<<aliceate<<endl;
        bobate=0;
        cout<<endl;
        while(s<=e && bobate<=aliceate){
            bobate+=arr[e];
            bob+=arr[e];
            cout<<"b  "<<bob<<endl;
            e--;
        }
        if(bobate>0) c++;
        cout<<"bobate  "<<bobate<<endl;
        aliceate=0;
    }
    cout<<c<<" "<<alice<<" "<<bob<<endl;;
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