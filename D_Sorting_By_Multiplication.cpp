#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

void solve() {
  int l;
  cin>>l;
  vector<int> v(l);
  forl(i,0,l) cin>>v[i];
  v.push_back(INT64_MAX);
  
  int makeinc=0, makedec=0;
  forl(i,0,l){
    int z=1;
    if(v[i]<v[i+1]){
      while(i<l && v[i]<v[i+1]){
        i++;z++;
      }
      makeinc++;
    }
    else if(v[i]>v[i+1]){
      while(i<l && v[i]>v[i+1]){
        i++;z++;
      }
      makeinc+=z;
    }
    else{
      while(i<l && v[i]==v[i+1]){
        i++;z++;
      }
      makeinc+=(z-1);
    }
  }
  forl(i,0,l){
    int z=1;
    if(v[i]<v[i+1]){
      while(i<l && v[i]<v[i+1]){
        i++;z++;
      }
      makedec+=z;
    }
    else if(v[i]>v[i+1]){
      while(i<l && v[i]>v[i+1]){
        i++;z++;
      }
      makedec++;
    }
    else{
      while(i<l && v[i]==v[i+1]){
        i++;z++;
      }
      makedec+=(z-1);
    }
  }
  cout<<makeinc<<" "<<makedec<<endl;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) solve();
  return 0;
}