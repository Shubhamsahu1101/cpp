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
  int n, m, k;
  cin>>n>>m>>k;
  vector<vector<int>> mt(n,vector<int>(m));
  vector<vector<char>> v(n,vector<char>(m));
  forl(i,0,n){
    forl(j,0,m){
      cin>>mt[i][j];
    }
  }
  forl(i,0,n){
    forl(j,0,m){
      cin>>v[i][j];
    }
  }
  int total=0;
  forl(i,0,n){
    forl(j,0,m){
      if(v[i][j]=='0') total+=mt[i][j];
      else total-=mt[i][j];
    }
  }
  total=abs(total);
  vector<vector<pair<int, int>>> mts(n, vector<pair<int, int>>(m));
  forl(i,0,n){
    forl(j,0,m){
      int sno=0,nosno=0;
      if(i!=0){
        sno=mts[i-1][j].first;
        nosno=mts[i-1][j].second;
      }
      if(v[i][j]=='0') sno++;
      else nosno++;
      mts[i][j]={sno, nosno};
    }
  }
  int gg=-1;
  k--;
  forl(i,k,n){
    int sno=0,nosno=0;
    forl(j,0,m){
      sno+=mts[i][j].first;
      nosno+=mts[i][j].second;
      if(i>k){
        sno-=mts[i-k-1][j].first;
        nosno-=mts[i-k-1][j].second;
      }
      if(j>k){
        sno-=mts[i][j-k-1].first;
        nosno-=mts[i][j-k-1].second;
        if(i>k){
          sno+=mts[i-k-1][j-k-1].first;
          nosno+=mts[i-k-1][j-k-1].second;
        }
      }
      if(j>=k){
        int diff=abs(sno-nosno);
        if(gg==-1) gg=diff;
        gg=gcd(gg,diff);
      }
    }
  }
  if(gg==0){
    if(total==0){
      yes;
    }
    else no;
  }
  if(total%gg==0){
    yes;
  }
  else no;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) solve();
  return 0;
}