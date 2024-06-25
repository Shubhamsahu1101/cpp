#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

bool isValid(const vector<int>& seq) {
    for (size_t i = 0; i < seq.size() - 1; i++) {
        if (seq[i] != 0 && seq[i + 1] != 0) {
            return false;
        }
    }
    return true;
}

vector<int> getBinary(int num) {
    vector<int> binary;
    int index = 1;
    
    while (num > 0) {
        if((num&1)==1) binary.push_back(1);
        else binary.push_back(0);
        num>>=1;
    }

    return binary;
}

void solve() {
    int l;
    cin>>l;
    
    vector<int> v=getBinary(l);
    // print(v);

    while(!isValid(v)){
    // print(v);
        for(int i=v.size()-1; i>0; i--) {
            if(v[i] == v[i-1] && v[i]==1){
                if(v.size()<=i+1) v.push_back(1);
                else v[i+1]=1;
                v[i]=0;
                v[i-1]=-1;
            }
            if(v[i] == v[i-1] && v[i]==-1){
                if(v.size()<i+1) v.push_back(-1);
                else v[i+1]=-1;
                v[i]=0;
                v[i-1]=1;
            }
            if(v[i-1]==-1 && v[i]==1){
                v[i]=0;
                v[i-1]=1;
            }
            if(v[i-1]==1 && v[i]==-1){
                v[i]=0;
                v[i-1]=-1;
            }
        }
    }
    cout<<v.size()<<endl;
    print(v);

}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}