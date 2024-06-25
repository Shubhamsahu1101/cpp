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
  int l;
  cin>>l;
  int a[l];
  int ans=INT64_MAX;
  int check1[3]={1,2,0};
  int check2[3]={1,0,2};
  int check3[3]={2,1,0};
  int check4[3]={2,0,1};
  int check5[3]={0,1,2};
  int check6[3]={0,2,1};
  int check7[3]={1,1,1};
  int check8[3]={2,2,2};
  int check9[3]={0,0,0};
  forl(i,0,l){
    cin>>a[i];
  }
  forl(i,0,l){
    a[i]%=3;
  }
  int c=0;
  forl(i,0,l){
    if(a[i]==2 && check1[i%3]==0) c+=1;
    else if(a[i]==1 && check1[i%3]==0) c+=2;
    
    else if(a[i]==2 && check1[i%3]==1) c+=2;
    else if(a[i]==0 && check1[i%3]==1) c+=1;
    
    else if(a[i]==1 && check1[i%3]==2) c+=1;
    else if(a[i]==0 && check1[i%3]==2) c+=2;
  }
  ans=min(ans,c);
  
  c=0;
  forl(i,0,l){
    if(a[i]==2 && check2[i%3]==0) c+=1;
    else if(a[i]==1 && check2[i%3]==0) c+=2;
    
    else if(a[i]==2 && check2[i%3]==1) c+=2;
    else if(a[i]==0 && check2[i%3]==1) c+=1;
    
    else if(a[i]==1 && check2[i%3]==2) c+=1;
    else if(a[i]==0 && check2[i%3]==2) c+=2;
  }
  ans=min(ans,c);
  
  c=0;
  forl(i,0,l){
    if(a[i]==2 && check3[i%3]==0) c+=1;
    else if(a[i]==1 && check3[i%3]==0) c+=2;
    
    else if(a[i]==2 && check3[i%3]==1) c+=2;
    else if(a[i]==0 && check3[i%3]==1) c+=1;
    
    else if(a[i]==1 && check3[i%3]==2) c+=1;
    else if(a[i]==0 && check3[i%3]==2) c+=2;
  }
  ans=min(ans,c);
  
  c=0;
  forl(i,0,l){
    if(a[i]==2 && check4[i%3]==0) c+=1;
    else if(a[i]==1 && check4[i%3]==0) c+=2;
    
    else if(a[i]==2 && check4[i%3]==1) c+=2;
    else if(a[i]==0 && check4[i%3]==1) c+=1;
    
    else if(a[i]==1 && check4[i%3]==2) c+=1;
    else if(a[i]==0 && check4[i%3]==2) c+=2;
  }
  ans=min(ans,c);
  
  c=0;
  forl(i,0,l){
    if(a[i]==2 && check5[i%3]==0) c+=1;
    else if(a[i]==1 && check5[i%3]==0) c+=2;
    
    else if(a[i]==2 && check5[i%3]==1) c+=2;
    else if(a[i]==0 && check5[i%3]==1) c+=1;
    
    else if(a[i]==1 && check5[i%3]==2) c+=1;
    else if(a[i]==0 && check5[i%3]==2) c+=2;
  }
  ans=min(ans,c);
  
  c=0;
  forl(i,0,l){
    if(a[i]==2 && check6[i%3]==0) c+=1;
    else if(a[i]==1 && check6[i%3]==0) c+=2;
    
    else if(a[i]==2 && check6[i%3]==1) c+=2;
    else if(a[i]==0 && check6[i%3]==1) c+=1;
    
    else if(a[i]==1 && check6[i%3]==2) c+=1;
    else if(a[i]==0 && check6[i%3]==2) c+=2;
  }
  ans=min(ans,c);

  
  c=0;
  forl(i,0,l){
    if(a[i]==2 && check7[i%3]==0) c+=1;
    else if(a[i]==1 && check7[i%3]==0) c+=2;
    
    else if(a[i]==2 && check7[i%3]==1) c+=2;
    else if(a[i]==0 && check7[i%3]==1) c+=1;
    
    else if(a[i]==1 && check7[i%3]==2) c+=1;
    else if(a[i]==0 && check7[i%3]==2) c+=2;
  }
  ans=min(ans,c);

  
  c=0;
  forl(i,0,l){
    if(a[i]==2 && check8[i%3]==0) c+=1;
    else if(a[i]==1 && check8[i%3]==0) c+=2;
    
    else if(a[i]==2 && check8[i%3]==1) c+=2;
    else if(a[i]==0 && check8[i%3]==1) c+=1;
    
    else if(a[i]==1 && check8[i%3]==2) c+=1;
    else if(a[i]==0 && check8[i%3]==2) c+=2;
  }
  ans=min(ans,c);

  c=0;
  forl(i,0,l){
    if(a[i]==2 && check9[i%3]==0) c+=1;
    else if(a[i]==1 && check9[i%3]==0) c+=2;
    
    else if(a[i]==2 && check9[i%3]==1) c+=2;
    else if(a[i]==0 && check9[i%3]==1) c+=1;
    
    else if(a[i]==1 && check9[i%3]==2) c+=1;
    else if(a[i]==0 && check9[i%3]==2) c+=2;
  }
  ans=min(ans,c);

  cout<<ans<<endl;
  
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