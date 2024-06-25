#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int l;
    cin>>l;
    int arr[l];
    int p[l];
    forl(i,0,l) cin>>arr[i];
    forl(i,0,l) cin>>p[i];
    vector<bool> left(l,false);
    vector<bool> right(l,false);
   
    left[0]=true;
    right[l-1]=true;

    vector<int> leftno;
    vector<int> rightno;

    int c1=0;
    int c2=0;

    forl(i,1,l){
        if(arr[i]-p[i]<=arr[i-1]) {
            left[i]=true;
        }
        else{
            c1++;leftno.push_back(i);
        }
    }

    forl(i,0,l-1){
        if(arr[i]+p[i]>=arr[i+1]) {
            right[i]=true;
        }
        else{
            c2++;rightno.push_back(i);
        }
    }

    // cout<<c1<<c2<<endl;
    if(c1==0 || c1==1 || c2==0 || c2==1){
        cout<<"YES"<<endl;
        return;
    }
    int rr=rightno.size()-1;
    int ll=leftno.size()-1;
// printarr(arr);
// printarr(p);
// print(leftno);
// print(rightno);
    // if(leftno[ll]-rightno[0]==1 || leftno[ll]-rightno[0]==0){
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // else 
    if(leftno[0]-rightno[rr]>=1){
        cout<<"YES"<<endl;
        return;
    }
    else if(abs(rightno[0]-leftno[ll])<=1){
        cout<<"YES"<<endl;
        return;
    }
    // else if(rightno[rr]-leftno[0]==1){
    //     cout<<"YES"<<endl;
    //     return;
    // }
        cout<<"NO"<<endl;
        return;


}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}