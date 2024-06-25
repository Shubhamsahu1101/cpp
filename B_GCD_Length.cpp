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
    int a,b,c;
    cin>>a>>b>>c;

    int x=pow(10,c);

    x--;
    int i=pow(10,min(a,b)-1)/x;
    while(log10(x*i)+1<min(a,b)){
        i++;
    }
    int j=pow(10,max(a,b)-1)/x;
    while((log10(x*j)+1<max(a,b))){
        j++;
        if((j%i)==0 && !(a==b && b==c && a==c)) j++;
    }

    if(a<b) cout<<x*i<<" "<<x*j<<endl;
    // else if(a==b && a!=c) cout<<x*i++<<" "<<x*i<<endl;
    else cout<<x*j<<" "<<x*i<<endl;
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