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
int maxw=0;
int water(int arr[][1002],int i,int j,int a,int b,int z){
    bool flag=false;
    int w=0;
    int y=arr[i][j];
    arr[i][j]=0;
    if(arr[i+1][j]>0){
        w+=water(arr,i+1,j,a,b,z+1);
        flag=true;
    }
    if(arr[i][j+1]>0){
        w+=water(arr,i,j+1,a,b,z+1);
        flag=true;
    }
    if(arr[i-1][j]>0){
        w+=water(arr,i-1,j,a,b,z+1);
        flag=true;
    }
    if(arr[i][j-1]>0){
        w+=water(arr,i,j-1,a,b,z+1);
        flag=true;
    }
    if(z==0 && !flag) return 0;
    return w+y;
}
void solve(){
    int a,b;
    cin>>a>>b;
    int arr[a+2][1002]={0};
    forl(i,1,a+1){
        forl(j,1,b+1){
            cin>>arr[i][j];
        }
    }
    forl(i,1,a+1){
        forl(j,1,b+1){
            if(arr[i][j]>0){
                maxw=max(water(arr,i,j,a,b,0),maxw);
            }
        }
    }
    cout<<maxw<<endl;
    maxw = 0;
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