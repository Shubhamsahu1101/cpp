#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void solve(){
    int l; cin>>l;
    int candies[l],left[l],right[l];

    forl(i,0,l){
        cin>>candies[i];
    }

    left[0]=candies[0];
    right[l-1]=candies[l-1];
    for(int i=1,j=l-2; i<l; i++,j--){
        left[i]=left[i-1]+candies[i];
        right[j]=right[j+1]+candies[j];
    }

    int i=0,j=l-1,ans=0;
    while(i<j){
        if(left[i]==right[j]){
            // cout<<i+1<<l-j<<endl;
            ans=max(ans,i+1+l-j);i++;
        }
        else if(left[i]>right[j]) j--;
        else i++;
    }

    // forl(i,0,l){
    //     cout<<left[i]<<" ";
    // }cout<<endl;
    // forl(i,0,l){
    //     cout<<right[i]<<" ";
    // }cout<<endl;

    cout<<ans<<endl;
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