#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i > b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    int a,b;
    cin>>a>>b;
    int x=0;
    if(a<4){
        if(a==1) x=0;
        else if(a==2) x=1;
        else if(a==3) x=3;
    }
    else{
        if(a%4==0) x=0;
        else if(a%4==1) x=a-1;
        else if(a%4==1) x=1;
        else if(a%4==1) x=a;
    }
    
    // cout<<"x "<<x<<endl;
    // cout<<(x^b)<<a<<endl;
    if(x==b) cout<<a<<endl;
    else if((x^b)==a) cout<<a+2<<endl;
    else cout<<a+1<<endl;
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