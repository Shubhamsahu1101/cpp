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
    int h,w;
    cin>>h>>w;
    int xa,ya;
    cin>>ya>>xa;
    int xb,yb;
    cin>>yb>>xb;

    if(ya>=yb){
        cout<<"Draw"<<endl;
        return;
    }

    int xd=abs(xa-xb);
    int yd=abs(ya-yb);

    if((xd-yd)>0){
        cout<<"Draw"<<endl;
        return;
    }

    else if((xd-yd)==0){
        cout<<"Alice"<<endl;
        return;
    }

    bool f=true;
    int hdist=xd;
    if(hdist%2!=0){
        f=false;
    }
    int rem=yd-hdist;
    if(f){
        if(rem%2==0){
            cout<<"Bob"<<endl;
            return;
        }
        else{
            cout<<"Alice"<<endl;
            return;
        }
    }
    else{
        if(rem%2==0){
            cout<<"Alice"<<endl;
            return;
        }
        else{
            cout<<"Bob"<<endl;
            return;
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