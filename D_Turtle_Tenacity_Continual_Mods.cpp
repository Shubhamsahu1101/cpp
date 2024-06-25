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

int nosofsmallest(vector<int>& arr) {
    int least = arr[0];
    int count = 1; 
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == least) {
            count++;
        } else {
            break;
        }
    }
    return count;
}

bool check(vector<int>& arr) {
    int least = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == least) {
            continue;
        } 
        if(arr[i]%least>0 && arr[i]%least<least){
            return 1;
        }
    }
    return 0;
}

void solve(){
    int l;
    cin>>l;
    vector<int> a(l);
    forl(i,0,l){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    if(nosofsmallest(a)==1){
        yes;
        return;
    }
    if(check(a)){
        yes;
        return;
    }
    no;

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