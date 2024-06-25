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
    int a,b,l;
    cin>>a>>b>>l;
    int t;
    int arr[a];
    int jmax=INT64_MIN,jsemimax=INT64_MIN,jsemimin=INT64_MAX,jmin=INT64_MAX,jsum=0;
    int gmax=INT64_MIN,gsemimax=INT64_MIN,gsemimin=INT64_MAX,gmin=INT64_MAX,gsum=0;
    forl(i,0,a)
    {
        cin>>t;
        jsum+=t;
        jmax=max(jmax,t);
        jmin=min(jmin,t);
        if(t>jsemimax && t<jmax)
            jsemimax=t;
        if(t<jsemimin && t>jmin)
            jsemimin=t;
    }
    forl(i,0,b)
    {
        cin>>t;
        gsum+=t;
        gmax=max(jmax,t);
        gmin=min(jmin,t);
        if(t>gsemimax && t<gmax)
            gsemimax=t;
        if(t<gsemimin && t>gmin)
            gsemimin=t;
    }
    l--;
    if(jsum<jsum-jmin+gmax){
        jsum-=jmin;
        jsum+=gmax;
        jmax=max(gmax,jmax);
        gmax=gsemimax;
        jmin=jsemimin;
        gmin=min(gmin,jmin);
    }
    if(!l){
        cout<<jsum<<endl;
        return;
    }
    l--;
    if(gsum<gsum-gmin+jmax){
        gsum-=gmin;
        gsum+=jmax;
        gmax=max(gmax,jmax);
        jmax=jsemimax;
        gmin=jsemimin;
        jmin=min(gmin,jmin);
    }

    if(l%2==0){
        cout<<max(jsum,jsum-jmin+gmax)<<endl;
    }
    else{
        cout<<max()
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