#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

void solve() {
    int n, c;
    cin>>n>>c;
    int arr[n];
    forl(i,0,n){
        cin>>arr[i];
    }
    int max1, maxval=-1;
    forl(i,0,n){
        if(arr[i]>maxval){
            maxval=arr[i];
            max1=i;
        }
    }
    int pref[n];
    forl(i,0,n){
        if(i==0) pref[i]=arr[i];
        else pref[i]=arr[i]+pref[i-1];
    }
    forl(i,0,max1){
        if(i==0){
            if(arr[i]+c>=maxval){
                cout<<0<<" ";
            }
            else{
                cout<<1<<" ";
            }
            continue;
        }
        int check=0;
        if(arr[i]+c<maxval){
            check=pref[i-1];
            if(check+arr[i]+c>=maxval){
                cout<<i<<" ";
            }
            else{
                cout<<i+1<<" ";
            }
        }
        else{
            cout<<i<<" ";
        }
    }
    forl(i,max1,n){
        if(i==max1){
            if(maxval<=arr[0]+c){
                cout<<i<<" ";
            }
            else cout<<0<<" ";
        }
        else cout<<i<<" ";
    }cout<<endl;
    // forl(i,0,n){
    //     if(i==0){
    //         if(arr[i]+c>=maxval){
    //             cout<<0<<" ";
    //         }
    //         else{
    //             cout<<1<<" ";
    //         }
    //         continue;
    //     }
    //     else if(i==max1){
    //         if(maxval<=arr[0]+c){
    //             cout<<i<<" ";
    //         }
    //         else cout<<0<<" ";
    //     }
    //     else cout<<i<<" ";
    // }cout<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}