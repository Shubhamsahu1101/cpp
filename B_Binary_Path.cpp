#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

bool lex(string& str1, string& str2) {
    if (str1.compare(str2) < 0) {
        return true;
    } else {
        return false;
    }
}

void solve(){
    int l;
    cin>>l;
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int c=1;
    string curr = "";
    int x=0;
    forl(i,0,l-1) {
        if(x==0) {
            if(s1.at(i+1)=='0' && s2.at(i)=='1'){
                curr+=s1.at(i);
                c=1;
            } else if(s1.at(i+1)=='1' && s2.at(i)=='0'){
                curr+=s1.at(i);
                curr+=s2.at(i);
                x=1;
            } else {
                curr+=s1.at(i);
                c++;
            }
        } else {
            curr+=s2.at(i);
        }
    }
    if(x==1) curr+=s2.at(s2.size()-1);
    if(x==0) {
        curr+=s1.at(s2.size()-1);
        curr+=s2.at(s2.size()-1);
    }
    cout<<curr<<endl;
    cout<<c<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}

