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
const int N = 1000 + 7;
int pr[N];
bool ok[N];

void solve(){
    int n, m, q;
    cin>>n>>m>>q;
	string s, t;
    cin>>s;
    cin>>t;
	
	pr[0] = 0;
	forl(i,0, n - m + 1){
		bool fl = true;
		forl(j,0, m)
			if (s[i + j] != t[j])
				fl = false;
		ok[i] = fl;
		pr[i + 1] = pr[i] + ok[i];
	}
    int z=0;
	for (int i = max(z, n - m + 1); i < n; ++i){
		pr[i + 1] = pr[i];
	}
	
	forl(i,0, q){
		int l, r;
        cin>>l>>r;
		--l, r -= m - 1;
		cout<<(r >= l ? pr[r] - pr[l] : 0)<<endl;
	}
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}