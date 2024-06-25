#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr, n) forl(i,0,n){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void getsun(int ini, vector<vector<int>> &arr) {
    int sum=0;
    forl(i,0,ini){
        forl(j,0,ini){
            sum+=arr[i][j];
        }
    }
    cout<<"sum: "<<sum<<endl;
}

void parr(int ini, vector<vector<int>> &arr) {
    forl(i,0,ini){
        forl(j,0,ini){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;cout<<endl;
}

void solve() {
    int n;
    cin>>n;
    int ini=n;
    vector<vector<int>> arr (n, vector<int>(n));
    int c=1;
    int sum=0;
    int op=0;
    int type=0;
    vector<vector<int>> ans;
    while(n>0){
        forl(i,0,n){
            c=1;
            vector<int> temp;
            if(type%2==0) temp.push_back(1);
            else temp.push_back(2);
            temp.push_back(i+1);
            forl(j,0,ini){
                if(type%2==0) arr[i][j]=c;
                else arr[j][i]=c;
                temp.push_back(c);
                c++;
            }
            ans.push_back(temp);
            op++;
            if(op==ini*2) break;
        }
            if(op==ini*2) break;
        // cout<<op<<endl;
        // getsun(ini, arr);parr(ini, arr);
        n--;type++;
    }
// parr(ini, arr);
    forl(i,0,ini){
        forl(j,0,ini){
            sum+=arr[i][j];
        }
    }

    cout<<sum<<" "<<op<<endl;

    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
