#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i > b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define cout(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    int l,a,b; cin>>l>>a>>b;
    string s; cin>>s;
    vector<int> v;

    int i=0,c=0;
    while(i<l){
        c=0;
        if(s.at(i)=='1'){
            while(i<l && s.at(i)=='1'){
                i++;
                c++;
            }
            v.pb(c);
        }
        else{
            while(i<l && s.at(i)=='0'){
                i++;
                c++;
            }
            v.pb(c);
        }
    }
    print(v);
    int ans=0;
    
    if(2*(a+b)<a*2+b){
        if(v.size()<3){
            forl(i,0,v.size()){
                ans+=(v.at(i)*a)+b;
            }
            cout<<ans<<endl;
        }
        else{
            while(v.size()>1){
                int m=INT64_MIN,n=0;
                forl(i,1,v.size()-1){
                    if(v.at(i-1)+v.at(i+1)>m){
                        m=v.at(i-1)+v.at(i+1);
                        n=i;
                    }
                }
                ans+=(v.at(n)*a)+b;
                v.erase(v.begin()+n-1,v.begin()+n+2);
                v.insert(v.begin()+n-1,m);
                cout<<"  "<<ans<<endl;
                cout<<m<<" "<<n<<endl;
                print(v);
            }
            ans+=(v.at(0)*a)+b;
            cout<<ans<<endl;
        }
    }
    else{
        cout<<a*l+b*l<<endl;
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