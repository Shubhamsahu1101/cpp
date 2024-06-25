#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    string str;
    cin>>str;
    int x;
    cin>>x;
    map<char,vector<int>,greater<int>> mp;
    int sum=0;
    forl(i,0,str.length()){
        mp[str.at(i)].push_back(i);
        sum+=str.at(i)-96;
    }


    forall(it,mp){
        cout<<it->first<<" ";
        forall(it1,it->second){
            cout<<*it1<<" ";
        }
        cout<<endl;
    }
    cout<<str;
    cout<<sum<<endl<<endl;

    auto it=mp.begin();
    while(sum>x){
        
        sum-=(it)->first-96;
        str.replace(it->second.back(),1,".");
        it->second.pop_back();
        cout<<sum<<" "<<str<<endl;

        if(it->second.empty()){
            it++;
            cout<<endl<<" ++ "<<endl;
        }
    }
    string ans="";
    forl(i,0,str.length()){
        if(str.at(i)=='.') continue;
        else ans+=str.at(i);
    }
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