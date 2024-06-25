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
int findHighestSetBit(int number) {
    if (number == 0)
        return 0; // Special case when number is 0

    int position = 1;
    int highestSetBitPosition = 0;

    // Loop through each bit from left to right
    while (number > 0) {
        // Check if the rightmost bit is set
        if (number & 1) {
            highestSetBitPosition = position;
        }
        // Move to the next bit
        number >>= 1;
        position++;
    }

    return highestSetBitPosition;
}
void solve(){
    int l;
    cin>>l;
    int x = findHighestSetBit(l);
    int z =0;
    cout<<(z|(1<<(x-1)))<<endl;
    // cout<<findHighestSetBit(l)<<endl;
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