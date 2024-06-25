#include <bits/stdc++.h>
#define lli long long int
using namespace std;
void solve(){
    lli n,m,l,r,positiveone=0,negativeone=0,p1,p2,size,poss;
    cin>>n>>m;
    int temp;
    while(n--){
        cin>>temp;
        if(temp==1) positiveone++;
        else negativeone++;
    }
    poss=min(positiveone,negativeone);
    while(m--){
        cin>>p1>>p2;
        size=p2-p1+1;
        if(size&1!=0 || size/2>poss) cout<<0<<endl;
        else cout<<1<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}