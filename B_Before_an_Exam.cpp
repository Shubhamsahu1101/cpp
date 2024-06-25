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
    int d,h,t,lb=0,ub=0;
    cin>>d>>h;
    int lba[d];
    int uba[d];
    forl(i,0,d){
        cin>>lba[i];lb+=lba[i];
        cin>>uba[i];ub+=uba[i];
    }
    if(h<lb || h>ub){no;return;}
    int i=0;
    int currh=lb;
    while(currh<h){
        if(i==d) i=0;
        if(lba[i]<uba[i]){
            if(uba[i]-lba[i]<=h-currh){
                int x=uba[i]-lba[i];
                lba[i]+=x;
                currh+=x;
            }
            else{
                int x=h-currh;
                lba[i]+=x;
                currh+=x;
            }
            i++;
        }
        else i++;
    }
    yes;
    printarr(lba);

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}