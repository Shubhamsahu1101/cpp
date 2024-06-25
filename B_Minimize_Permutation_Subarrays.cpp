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
    vector<int> v(l);
    int one,two,largest;
    forl(i,0,l){
        cin>>v[i];
        if(v[i]==1) one=i+1;
        else if(v[i]==2) two=i+1;
        else if(v[i]==l) largest=i+1;
    }
    // cout<<one<<" "<<two<<" "<<largest<<endl;
    if(one<two && two<largest) cout<<two<<" "<<largest<<endl;
    else if(one<largest && largest<two) cout<<1<<" "<<1<<endl;
    else if(two<largest && largest<one) cout<<1<<" "<<1<<endl;
    else if(two<one && one<largest) cout<<one<<" "<<largest<<endl;
    else if(largest<one && one<two) cout<<one<<" "<<largest<<endl;
    else if(largest<two && two<one) cout<<two<<" "<<largest<<endl;
    else cout<<-1<<endl;

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