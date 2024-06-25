#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;

void solve(){
   // int l;cin>>l;string str;
   // set<string> st;
   // int ans[l]={0};
   // string arr[l],temp;

   // forl(i,0,l){
   //    cin>>temp;
   //    arr[i]=temp; 
   //    st.insert(temp);
   // }

   // string str1,str2;int x;

   // forl(i,0,l){
   //    forl(j,1,arr[i].length()){
   //       str1=arr[i].substr(0,j);
   //       str2=arr[i].substr(j,x-j);
         
   //       if(st.find(str1)!=st.end() && st.find(str2)!=st.end()){
   //             ans[i]=1;
   //             continue;
   //       } 
   //       // cout<<str1<<" "<<str2<<endl;
   //    }
   // }
   // forl(i,0,l){
   //  cout<<ans[i];
   // }cout<<endl;

    int x;
    cin >> x;
   int v[x]={0};
    string a[x];
    string z;
    map<string, int> m;
    for (int i = 0; i <x; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    for (int i = 0; i <x; i++)
    {
        for (int j = 1; j <a[i].size(); j++)
        {
           string str=a[i].substr(0,j);
           string s2=a[i].substr(j,a[i].size());
        //  cout<<str<<" "<<s2<<endl;
        if(m[str] && m[s2])
        {
         v[i]=1;
            break;
        }
        }
    }
    forl(i,0,x)
    {
        cout<<v[i];
    }
    cout<<endl;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int t=1;
   cin>>t;
   forl(tc, 0, t){
      solve();
   }
   return 0;
}
