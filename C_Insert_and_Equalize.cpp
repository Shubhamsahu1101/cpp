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
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve(){
    int l;
    cin>>l;
    int arr[l];
    set<int> s;
    int sum=0;
    forl(i,0,l){
        cin>>arr[i];
        sum+=arr[i];
        s.insert(arr[i]);
    }
    if(l==1){
        cout<<1<<endl;
        return;
    }
    sum/=l;
    sort(arr,arr+l);

    int on = arr[0];
    for (int i = 1; i < l; ++i) {
        if(arr[i]>on){
            on=arr[i];
        }
    }

    int x=abs(arr[0]-arr[1]);
    forl(i,2,l){
        x=gcd(x,abs(arr[i]-arr[i-1]));
    }

    int c=0;
    int t=1;
    while(s.find(on-x*t)!=s.end()){
        t++;
    }
    c+=t;

    forl(i,0,l){
        c+=abs(arr[i]-on)/x;
    }
    cout<<c<<endl;
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