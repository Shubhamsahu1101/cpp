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
    int n,m;
    cin>>n>>m;
    int arr[n+2][m+2]={'.'};
    string str;
    forl(i,1,n+1){
        cin>>str;
        forl(j,0,m){
            arr[i][j+1]=str.at(j);
        }
    }
    int c=0;
    forl(i,1,n+1){
        forl(j,1,m+1){
            if(arr[i][j]=='W'){
                if(arr[i-1][j]=='P'){
                    arr[i-1][j]='.';
                    c++;
                    continue;
                }
                else if(arr[i][j-1]=='P'){
                    arr[i][j-1]='.';
                    c++;
                    continue;
                }
                else if(arr[i][j+1]=='P'){
                    arr[i][j+1]='.';
                    c++;
                    continue;
                }
                else if(arr[i+1][j]=='P'){
                    arr[i+1][j]='.';
                    c++;
                    continue;
                }
            }
        }
    }
    cout<<c<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}