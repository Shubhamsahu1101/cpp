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
int distinctValuesOfK(int a, int b, int l) {
    unordered_set<int> possibleKValues;

    for (int x = 0; pow(a, x) <= l; x++) {
        for (int y = 0; pow(a, x) * pow(b, y) <= l; y++) {
            int k = l / (int)pow(a, x) / (int)pow(b, y);
            if (k * pow(a, x) * pow(b, y) == l) {
                possibleKValues.insert(k);
            }
        }
    }

    return possibleKValues.size();
}

void solve(){
    int a,b,l;
    cin>>a>>b>>l;
    // int x = countOccurrences(l, a);
    // int y = countOccurrences(l, b);
    // cout<<x*y<<endl;
    std::cout << distinctValuesOfK(a, b, l) << std::endl;
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