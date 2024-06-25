#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i > b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define cout(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

bool second(pair<int,int>& a,pair<int,int>& b){
    return a.second<b.second;
}
 
void solve(){
    int l; cin>>l;
    int arr[l];
    string str;
    forl(i,0,l){
        cin>>arr[i];
    }
    cin>>str;
    // cout(arr);
    // cout<<str<<endl;
    
    vector<pair<int,int>> v1;
    vector<pair<int,int>> v2;
    forl(i,0,l){
        if(str.at(i)-48) v2.pb(make_pair(arr[i],i));
        else v1.pb(make_pair(arr[i],i));
    }
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    // forall(it,v1){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // forall(it,v2){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // cout<<endl;

    int x=1;
    forall(i,v1){
        i->first=x;
        x++;
    }
    forall(i,v2){
        i->first=x;
        x++;
    }
    forall(it,v2){
        v1.pb(*it);
    }
    
    sort(v1.begin(),v1.end(),second);
    // sort(v2.begin(),v2.end(),second);

    forall(it,v1){
        cout<<it->first<<" ";
    }
    cout<<endl;
    // forall(it,v2){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
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