#include <bits/stdc++.h>
using namespace std;
void solve(){
    char suit;
    cin>>suit;
    string str1,str2;
    cin>>str1>>str2;
    if(str1[0]=='T')str1.replace(0,1,"V");
    else if(str1[0]=='J')str1.replace(0,1,"W");
    else if(str1[0]=='Q')str1.replace(0,1,"X");
    else if(str1[0]=='K')str1.replace(0,1,"Y");
    else if(str1[0]=='A')str1.replace(0,1,"Z");
    if(str2[0]=='T')str2.replace(0,1,"V");
    else if(str2[0]=='J')str2.replace(0,1,"W");
    else if(str2[0]=='Q')str2.replace(0,1,"X");
    else if(str2[0]=='K')str2.replace(0,1,"Y");
    else if(str2[0]=='A')str2.replace(0,1,"Z");
    if(str1[1]==str2[1]){
        if(str1[0]>str2[0]) cout<<"YES";
        else cout<<"NO";
    }
    else if(str1[1]==suit){
        cout<<"YES";
    }
    else cout<<"NO";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}