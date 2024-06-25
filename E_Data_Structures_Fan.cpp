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
    string s;
    cin>>s;
    int x;
    cin>>x;
    int t,a,b;
    
    int y=0;int z=0;
    forl(i,0,l){
        if(s.at(i)=='0') y^=arr[i];
        else z^=arr[i];
    }
    while(x--){
        cin>>t;
        if(t==2){
            cin>>a;
            if(a==0){
                cout<<y<<" ";
            }
            else{
                cout<<z<<" ";
            }
        }
        else{
            cin>>a>>b;
            forl(i,a-1,b){
                z^=arr[i];
                y^=arr[i];
            }
        }
    }
    cout<<endl;
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