#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i > b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define cout(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    // int t;
    // set<int> s;
    // forl(i,0,l){
    //     cin>>t;
    //     s.insert(t);
    // }
    // int c=l/2;
    // // cout<<c<<endl;
    // forall(it,s){
    //     // cout<<*it<<endl;
    //     auto i=s.begin();
    //     while(c && i!=it){
    //         if(s.find(*it%*i)==s.end()){
    //             cout<<*it<<" "<<*i<<endl;
    //             c--;
    //             if(!c) return;
    //         }
    //         i++;
    //     }
    // }
    int arr[l];
    forl(i,0,l){
        cin>>arr[i];
    }
    int c=l/2;
    sort(arr,arr+l);
    // cout(arr);
    forl(i,1,l){
        forl(j,0,i){
            forl(k,0,i){
                // cout<<arr[i]<<arr[j]<<" "<<arr[k]<<endl;
                if(arr[i]%arr[j]<arr[k]){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    c--;
                    if(!c) return;
                    break;
                }
                else if(arr[i]%arr[j]==arr[k]) break;
                if(!c) return;
            }
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