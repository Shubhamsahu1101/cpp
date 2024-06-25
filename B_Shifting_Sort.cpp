#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    int arr[l+2]={0};
    vector<int> v;
    forl(i,0,l){
        cin>>arr[i+1];
    }
    arr[l+1]=INT64_MAX;
    // forl(i,0,l+2){
    //     cout<<arr[i]<<" ";
    // }cout<<endl<<endl;


    int temp;
    forr(i,l-1,1){
        // cout<<i<<endl;
        if(arr[i]<=arr[i+1]) continue;
        else{
            forl(j,i+1,l+2){
                if(arr[i]<arr[j]){
                    // cout<<i<<" "<<j-1<<" "<<1<<endl;
                    v.pb(i);
                    v.pb(j-1);
                    v.pb(1);
                    temp=arr[i];
                    forl(k,i,j-1){
                        arr[k]=arr[k+1];
                    }
                    arr[j-1]=temp;
                    break;
                }
            }
            // forl(i,0,l+2){
            //     cout<<arr[i]<<" ";
            // }cout<<endl<<endl;
        }
    }
    cout<<v.size()/3<<endl;
    forl(i,0,v.size()){
        cout<<v.at(i)<<" ";i++;
        cout<<v.at(i)<<" ";i++;
        cout<<v.at(i)<<endl;
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