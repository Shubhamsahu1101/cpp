#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
int countDuplicates(const vector<int>& arr) {
    unordered_map<int, int> countMap;
    int duplicateCount = 0;
    
    for (int num : arr) {
        countMap[num]++;
        if (countMap[num] == 2) {
            duplicateCount++;
        } else if (countMap[num] == 3) {
            duplicateCount--;
        }
    }
    
    return duplicateCount;
}
void solve() {
    int l;
    cin>>l;
    vector<int> arr(l);
    forl(i,0,l){
        cin>>arr[i];
    }
    int x=countDuplicates(arr);
    cout<<x<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}