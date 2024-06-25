#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
   int l;
   cin>>l;
   string str;
   cin>>str;
   stack<char> st;
   for (int i = 0; i < l; i++)
   {
      if(str[i]=='m'||str[i]=='M'){
         if(st.empty()){
            st.push('m');
         }
         else if(st.top()=='m'){
            continue;
         }
         else{
            cout<<"NO"<<endl;return;
         }
      }
      else if(str[i]=='e'||str[i]=='E'){
         if(st.empty()){
            cout<<"NO"<<endl;return;
         }
         else if(st.top()=='m'){
            st.push('e');
         }
         else if(st.top()=='e'){
            continue;
         }
         else{
            cout<<"NO"<<endl;return;
         }
      }
      else if(str[i]=='o'||str[i]=='O'){
         if(st.empty()){
            cout<<"NO"<<endl;return;
         }
         else if(st.top()=='e'){
            st.push('o');
         }
         else if(st.top()=='o'){
            continue;
         }
         else{
            cout<<"NO"<<endl;return;
         }
      }
      else if(str[i]=='w'||str[i]=='W'){
         if(st.empty()){
            cout<<"NO"<<endl;return;
         }
         else if(st.top()=='o'){
            st.push('w');
         }
         else if(st.top()=='w'){
            continue;
         }
         else{
            cout<<"NO"<<endl;return;
         }
      }
         else{
            cout<<"NO"<<endl;return;
         }
   }
   if(st.top()=='w')
   {
      cout << "YES"<<endl;
   }else cout<<"NO"<<endl;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   int t = 1;
   cin >> t;
   for (int tc = 0; tc < t; tc++)
   {
      solve();
   }
   return 0;
}