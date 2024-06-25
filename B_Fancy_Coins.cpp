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
  int m,k,a1,ak;
  cin>>m>>k; 
  cin>>a1>>ak;
  int kburles,burle;
  int numk=m/k;
  int num1, kburles_fancy, burle_fancy;

  if(numk>ak){
    kburles=ak;
    kburles_fancy=numk-ak;

    num1=m-numk*k;
  }
  else{
    kburles=numk;
    kburles_fancy=0;
    
    num1=m-numk*k;
  }

  int burle_left;

  if(num1>a1){
    burle=a1;
    burle_fancy=num1-a1;
    burle_left=0;
  }
  else{
    burle=num1;
    burle_fancy=0;
    burle_left=a1-num1;
  }

  // cout<<kburles<<" "<<kburles_fancy<<endl;
  // cout<<burle<<" "<<burle_fancy<<" "<<burle_left<<endl;

  int remove = min(kburles_fancy,burle_left/k);

  int ans=kburles_fancy+burle_fancy-remove;
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