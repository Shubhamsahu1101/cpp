#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int filters, devices, dsockets;
    cin >> filters >> devices >> dsockets;
    vector<int> v;
    bool boo=true;
    int arr[filters];
    for (int i = 0; i < filters; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+filters);
    int totalsockets=dsockets,fcounter=0;
    filters--;
    while(totalsockets<devices){
        totalsockets--;
        totalsockets+=arr[filters];
        fcounter++;
        if(filters==0 && totalsockets<devices){
            boo=false;
            break;
        }
        filters--;
    }
    if(boo) cout<<fcounter;
    else cout<<-1;
    


}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        solve();
    }
    return 0;
}