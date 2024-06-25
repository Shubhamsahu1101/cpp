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
    int w,h;
    cin>>w>>h;
    int c=4,n,t;
    int x1=INT64_MAX,x2=INT64_MIN,x3=INT64_MAX,x4=INT64_MIN,y1=INT64_MAX,y2=INT64_MIN,y3=INT64_MAX,y4=INT64_MIN;
    cin>>n;
    while(n--){
        cin>>t;
        x1=min(x1,t);
        x2=max(x2,t);
    }
        cout<<x2<<x1<<endl;
    cin>>n;
    while(n--){
        cin>>t;
        x3=min(x3,t);
        x4=max(x4,t);
    }
        cout<<x4<<x3<<endl;
    cin>>n;
    while(n--){
        cin>>t;
        y1=min(y1,t);
        y2=max(y2,t);
    }
        cout<<y2<<y1<<endl;
    cin>>n;
    while(n--){
        cin>>t;
        y3=min(y3,t);
        y4=max(y4,t);
    }
        cout<<y4<<y3<<endl;
    cout<<max(max(h*(x2-x1),h*(x4-x3)),max(w*(y2-y1),w*(y4-y3)))<<endl;
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