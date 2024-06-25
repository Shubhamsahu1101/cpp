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
    // int l,t,odd=0,eve=0;
    // cin>>l;
    // bool flag =true;
    // vector<int> v;
    // int arr[l];
    // forl(i,0,l) cin>>arr[i];
    // forl(i,0,l){
    //     forl(j,i,l){
    //         // if(j==l-1) if(arr[l-1]==1) continue;
    //         if(flag){
    //             eve+=arr[j];
    //             v.pb(arr[j]);
    //             flag=false;
    //         }
    //         else{
    //             if(odd+arr[j]==eve){
    //                 odd+=arr[j];
    //                 v.pb(arr[j]);
    //                 flag=true;
    //             }
    //         }
    //     }
    //     // cout<<"i "<<i<<endl;
    //     // print(v);
    //     if(v.size()>=l/2 && odd==eve) break;
    //     else{
    //         v.clear();
    //         odd=0;
    //         eve=0;
    //         flag=true;
    //     }
    // }
    // // cout<<"ans"<<endl;
    // cout<<v.size()<<endl;
    // print(v);
    int l,t,one=0;
    cin>>l;
    forl(i,0,l){
        cin>>t;
        if(t) one++;
    }
    if(l-one>=l/2){
        cout<<l/2<<endl;
        forl(i,0,l/2){
            cout<<0<<" ";
        }
        cout<<endl;
    }
    else{
        if(one%2==0){
            cout<<one<<endl;
            forl(i,0,one){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<--one<<endl;
            forl(i,0,one){
                cout<<1<<" ";
            }
            cout<<endl;
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