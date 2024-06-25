#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    string s;
        cin>>s; 
        map <char,set<int>>m;
        forl(i,0,s.size())
        {
            if(s[i]=='h')
            {
                m['h'].insert(i);
            }
            else if(s[i]=='e')
            {
                m['e'].insert(i);
            }
            else if(s[i]=='l')
            {
                m['l'].insert(i);
            } 
            else if(s[i]=='o')
            {
                m['o'].insert(i);
            }
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second.empty())
            {
                no;
                return;
            }
        }
    //     for(auto it=m.begin();it!=m.end();it++)
    //    {
    //     cout<<it->first<<" ";
    //     for(auto i=it->second.begin();i!=it->second.end();i++){
    //         cout<<*i<<" ";
    //     }cout<<endl;
    //    }
        forall(i1,m['h']){
            forall(i2,m['e']){
                forall(i3,m['l']){
                    forall(i4,m['l']){
                        forall(i5,m['o']){
                            if(*i1<*i2){
                                if(*i2<*i3){
                                    if(*i3<*i4){
                                        if(*i4<*i5){
                                            // cout<<*i1<<*i2<<*i3<<*i4<<*i5<<endl;
                                yes;
                                return;
                                        }
                                    }
                                }
                                
                            }
                        }
                    }
                }
            }
        }
        no;
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