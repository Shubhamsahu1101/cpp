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
    int inp[l];
    int arr[l]={0};
    map<int,int> mpcoin;
    queue<pair<int,int>> q;
    forl(i,0,l){
        cin>>inp[i];
        mpcoin[inp[i]]=i+1;
    }

    int k,prevspentk,total;
    cin>>k;
    total=k;
    int x=-1;
    auto it=mpcoin.begin();
    while(it!=mpcoin.end()){
        if(it->second>=x){
            q.push({it->first,it->second});
            x=it->second;
        }
        it++;
    }
    int mcoin=q.front().first;
    int mindex=q.front().second;
    int prevminindex;
    x=k/q.front().first;
    if(x<1){
        printarr(arr);
        return;
    }
    prevspentk=k/mcoin;
    k=k%mcoin;
    forl(i,0,mindex){
        arr[i]+=x;
    }
    q.pop();

    while(!q.empty() && k){
        x=k/(q.front().first-mcoin);
        if(x>prevspentk){
            x=prevspentk;
        }
        if(x<1){
            printarr(arr);
            return;
        }
        prevspentk=x;
        k-=(k*(q.front().first-mcoin));
        
        mcoin=q.front().first;
        prevminindex=mindex;
        mindex=q.front().second;
        
        forl(i,prevminindex,mindex){
            arr[i]+=x;
        }
        q.pop();
    }
    printarr(arr);
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