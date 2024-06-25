#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l,n;
    cin>>l>>n;
    vector<int> c;
    int t;
    cin>>t;
    c.push_back(t);
    forl(i,1,l){
        cin>>t;
        c.push_back(t);
    }
    sort(c.begin(), c.end(), greater<int>());
    forl(i,1,l){
        c.at(i)=(c.at(i-1)+c.at(i));
    }
    // forall(it,c){
    //     cout<<*it<<" ";
    // }cout<<endl;
    forl(i,0,n){
        cin>>t;
        if(t<c.front()){
            cout<<1<<endl;
        }
        else if(t>c.back()){
            cout<<-1<<endl;
        }
        else if(upper_bound(c.begin(),c.end(),t)==c.end()){
            cout<<l<<endl;
        }
        else{
            auto itr=upper_bound(c.begin(),c.end(),t);
            while(*(itr-1)==t){
                itr--;
            }
            // cout<<"c ";
            cout<<itr-c.begin()+1<<endl;;
            // cout<<*upper_bound(c.begin(),c.end(),t)<<endl;
        }
    }
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