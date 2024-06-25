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
    int l;
    cin>>l;
    int arr[l];
    forl(i,0,l){
        cin>>arr[i];
    }
    sort(arr,arr+l);
    
    int se=INT64_MAX;
    int so=INT64_MAX;
    // printarr(arr);
    forl(i,0,l){
        if(arr[i]%2==0 && arr[i]<se) se=arr[i];
        if(arr[i]%2!=0 && arr[i]<so) so=arr[i];
    }
    int x=arr[0]%2;
    if(se==INT64_MAX) se=0;
    if(so==INT64_MAX) so=0;

    // cout<<se<<" "<<so<<" "<<x<<endl;
    bool f=true;
    bool b=true;
    forl(i,0,l){
        // if(arr[i]%2==x || (arr[i]-se)%2==x || (arr[i]-so)%2==x) continue;
        if(arr[i]%2==x) b=true;
        if(se!=arr[i] && (arr[i]-se)%2==x) b=true;
        if(so!=arr[i] && (arr[i]-so)%2==x) b=true;
        if(b){
            b=false;
            continue;
        }
        else{
            f=false;
            break;
        }
    }

    if(f) yes;
    else no;

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