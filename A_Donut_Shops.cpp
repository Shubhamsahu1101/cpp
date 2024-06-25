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
    int a,b,c,a1=-2,a2=-2;
    cin>>a>>b>>c;
    if(a>=c) a1=-1;
    if(a*b<=c) a2=-1;
    else if(a==c && b<=1000000000) a2=b;
    else if(a*b>c && b<=1000000000) a2=b;
        // cout<<a1<<" "<<a2<<endl;
    int d=1,p1,p2;
    while(a1==-2 || a2==-2){
        p1=d*a;
        p2=((d/b)+(d%b? 1:0))*c;
        // cout<<p1<<" "<<p2<<endl;
        if(p1<p2 && a1!=-1) a1=d;
        else if(p1>p2 && a2!=-1) a2=d;
        d++;
    }
    cout<<a1<<" "<<a2<<endl;
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