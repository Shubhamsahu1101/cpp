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
  vector<int> a(l);
  vector<int> b(l);
  forl(i,0,l){
    cin>>a[i];
  }
  forl(i,0,l){
    cin>>b[i];
  }
  int cp=0,cz=0,cm=0;
  int ans1=0,ans2=0,c1=0,c2=0,p1=0,p2=0;
  forl(i,0,l){
    if(a[i]==b[i]){
      if(a[i]==1) cp++;
      else if(a[i]==0) cz++;
      else cm++;
    }
    else{
      if(a[i]==1) ans1++;
      else if(b[i]==1) ans2++;
    }
  }

  int ans=0;
  int absl=cp-cm;
  int mx=max(ans1,ans2);
  int mn=min(ans1,ans2);
  
  
  // int t=min(cm,mx-mn);
  // if(t==cm){
  //   mx-=t;
  // }
  // else{
  //   mx=mn;
  //   cm-=t;
  //   mn-=(cm+1)/2;
  //   mx-=cm/2;
  // }
  while(cm>0){
    if(ans1>ans2){
      ans1--;cm--;
    }
    else{
      ans2--;cm--;
    }
  }

  while(cp>0){
    if(ans1>ans2){
      ans2++;cp--;
    }
    else{
      ans1++;cp--;
    }
  }
  cout<<min(ans1,ans2)<<endl;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) solve();
  return 0;
}