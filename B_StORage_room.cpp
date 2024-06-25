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
int setbits(int x){
    int c=0;
    forl(i,0,32){
        if((x&1)==1) c++;
        x>>=1;
    }
    return c;
}
void solve(){
    int l;
    cin>>l;
    int t,x;
    if(l==1){
        cin>>t;
        yes;
        cout<<t<<endl;
        return;
    }
    int grid[l][l];
    int arr[l];
    forl(i,0,l){
        x=INT32_MAX;
        forl(j,0,l){
            cin>>t;
            grid[i][j]=t;
            if(i!=j){
                x&=t;
            }
        }
        arr[i]=x;
    }
    forl(i,0,l){
        forl(j,0,l){
            if(i==j) continue;
            if((arr[i]|arr[j])!=grid[i][j]){
                no;
                return;
            }
        }
    }
    yes;
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