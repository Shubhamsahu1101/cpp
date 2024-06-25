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
    int msum=0;
    int a[3][l];
    forl(i,0,3){
        forl(j,0,l){
            cin>>a[i][j];
        }
    }
    int sum;
    forl(i,0,3){
        int x1=-1,x2=-1,x3=-1;
        sum=-1;
        forl(x,0,l){
            if(a[i][x]>sum){
                sum=a[i][x];
                x1=x;
            }
        }
        forl(j,0,3){
            if(j==i) continue;
            sum=-1;
            forl(x,0,l){
                if(a[j][x]>sum && x!=x1){
                    sum=a[j][x];
                    x2=x;
                }
            }
            forl(k,0,3){
                if(k==i || k==j) continue;
                sum=-1;
                forl(x,0,l){
                    if(a[k][x]>sum && x!=x1 && x!=x2){
                        sum=a[k][x];
                        x3=x;
                    }
                }
                // cout<<i<<" "<<j<<" "<<k<<endl;
                // cout<<x1<<" "<<x2<<" "<<x3<<endl<<endl;
                msum=max(msum,a[i][x1]+a[j][x2]+a[k][x3]);
            }
        }
    }
    cout<<msum<<endl;
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