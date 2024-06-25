#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    int l;
    cin>>l;
    int arr[l];
    forl(i,0,l) cin>>arr[i];
    int s=0;
    int e=l-1,t1=-1,t2=-1;
    int x,y;
    while(s<e){
        if(arr[s]==t1 || arr[s]==t2) s++;
        else if(arr[e]==t1 || arr[e]==t2) e--;
        else if(arr[s]==arr[e]){
            s++;e--;
        }
        else if(arr[s]!=arr[e]){
            if(t1==-1){
                t1=arr[s];
                x=s;y=e;
            }
            else if(t2==-1){
                s=x;e=y;
                t2=arr[e];
                t1=-2;
            }
            else{
                no;
                return;
            }
        }
    }
    yes;
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