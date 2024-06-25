#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int n,x,evec=0,oddc=0;
    cin>>n>>x;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]&1!=0) oddc++;
        else evec++;
    }
    if(evec==n && x%2==0) cout<<-1<<endl;
    else if(evec==0) cout<<0<<endl;
    else if(x&1!=0){  //odd
        cout<<((evec%2)+(evec/2))<<endl;
    }
    else{  //even
        cout<<evec<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}