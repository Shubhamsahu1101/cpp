#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int down(int a){
    if(a==0) return 9;
    else return a-1;
}
int up(int a){
    if(a==9) return 0;
    else return a+1;
}

void solve(){
   int n,temp;
   string str;
   cin>>n;
   vector<int> v;
   forl(i,0,n){
    cin>>temp;
    v.push_back(temp);
   }
   forl(i,0,n){
    cin>>temp;cin>>str;
    forl(j,0,temp){
        // cout<<str.at(j)<<" ";
        if(str.at(j)=='U') v.at(i)=down(v.at(i));
        else v.at(i)=up(v.at(i));
        
        // cout<<v.at(i)<<" "<<endl;
    }
        cout<<v.at(i)<<" ";
   }cout<<endl;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int t=1;
   cin>>t;
   forl(tc, 0, t){
      solve();
   }
   return 0;
}