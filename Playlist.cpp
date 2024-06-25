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
    vector<int> arr(l);
    forl(i,0,l){
        cin>>arr[i];
    }
    int i=0,j=0,c=1,m=1;
    map<int,int> s;
    s[arr[j]]++;
    while(j<l-1 && i<l-1){
        j++;
        c++;
        if(s[arr[j]]){
            m=max(m,c-1);
            while(i<=j && s[arr[j]]){
                s[arr[i]]--;
                i++;
                c--;
            }
        }
        else m=max(m,c);
        s[arr[j]]++;
    }
    cout<<m<<endl;
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