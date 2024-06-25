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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2!=0){
        cout<<-1<<endl;
        return;
    }
    int i=0,j=n-1;
    int c=0;
    vector<int> v;
    while(i<j && c<=300){
        if(s.at(i)!=s.at(j)){
            i++;j--;
        }
        else{
            if(s.at(i)=='0'){
                s.insert(j+1,"01");
                v.pb(j+1);
                j++;i++;
            }
            else{
                s.insert(i,"01");
                v.pb(i);
                i++;j++;
            }
            c++;
        }
    }
    if(c>300){
        cout<<-1<<endl;
        return;
    }
    cout<<c<<endl;
    print(v);
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