#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve()
{
    int l,t;
    cin>>l;
    vector<int> v;
    forl(i,0,l){
        cin>>t;
        v.push_back(t);
    }
    int minsum=-1,minpos=0;
    while(minsum<0){
        minsum=INT64_MAX;
        forl(i,1,l){
            if(v.at(i-1)+v.at(i)<minsum){
                minsum=v.at(i-1)+v.at(i);
                minpos=i;
            }
        }
    if(minsum<0)
        {v.at(minpos)=-v.at(minpos);
        v.at(minpos-1)=-v.at(minpos-1);}
    }
    forl(i,0,l){
        cout<<v.at(i)<<" ";
    }
    int ans=0;
    forl(i,0,l){
        ans+=v.at(i);
    }
    cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        solve();
    }
    return 0;
}