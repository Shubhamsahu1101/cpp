#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void swapCharacters(string& str1, string &str2, int index1) {
    // Swap characters at index1 and index2
    char temp = str1[index1];
    str1[index1] = str2[index1];
    str2[index1] = temp;
}

void solve() {
    string s1;
    string s2;
    int sm;
    cin>>s1>>s2;
    int l=s1.size();
    int i=0;
    for(;i<l;i++){
        if(s1.at(i)==s2.at(i)){
            continue;
        }
        if(s1.at(i)<s2.at(i)) sm=1;
        else sm=2;
        i++;
        break;
    }
    // cout<<sm<<endl;
    for(;i<l;i++){
        // cout<<s1.at(i)<<" "<<s2.at(i)<<" "<<sm<<endl;
        if(s1.at(i)>s2.at(i) && sm==2){
            swapCharacters(s1,s2,i);
        } else if(s1.at(i)<s2.at(i) && sm==1) {
            swapCharacters(s1,s2,i);
        }
    }

    cout<<s1<<endl;
    cout<<s2<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}