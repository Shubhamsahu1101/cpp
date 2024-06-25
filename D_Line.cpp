#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
    int l;cin>>l;
    string str;cin>>str;

    int s=0;
    int i=0;
    queue<int> q;

    while(i!=(l/2)){
        if(str.at(i)=='L'){
            q.push((l-1-i)-i);
            s+=i;
        }
        else{ s+=l-1-i; }

        if(str.at(l-i-1)=='R'){
            q.push((l-i-1)-i);
            s+=i;
        }
        else{ s+=l-1-i; }
        i++;
    }
    if(l&1==1) s+=l/2;
    
    forl(i,0,l){
        if(q.empty()) cout<<s<<" ";
        else{
            s+=q.front();
            cout<<s<<" ";
            q.pop();
        }
    }
    cout<<endl;

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