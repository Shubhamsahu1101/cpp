#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
int countLocalMaximums(int p[], int q[], int n) {
    int a[n];
    int localMaximums = 0;

    // Step 1: Create array 'a' where a[i] = p[i] + q[i]
    for (int i = 0; i < n; ++i) {
        a[i] = p[i] + q[i];
    }

    // Step 2: Count the number of local maximums in 'a'
    for (int i = 1; i < n - 1; ++i) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
            localMaximums++;
        }
    }

    return localMaximums;
}
void solve() {
    int l;
    cin>>l;
    int arr[l];
    int ans1[l]={0};
    int ans2[l]={0};
    int check[l]={0};
    forl(i,0,l){
        cin>>arr[i];
    }
    forl(i,1,l-1){
        int x=0;
        x=max(arr[i-1]-arr[i]+1,x);
        x=max(arr[i+1]-arr[i]+1,x);
        check[i]=x;
    }
    // printarr(check);
    cout<<endl;

    vector<pair<int,int>> checkmap;
    vector<pair<int,int>> kuchbhi;


    forl(i,1,l-1){
        checkmap.push_back({check[i],i});
        i++;
        if(i<l-1) kuchbhi.push_back({arr[i],i});
    }
    kuchbhi.push_back({arr[0],0});
    kuchbhi.push_back({arr[l-1],l-1});
    // cout<<"checkmap"<<endl;
    // forl(x,0,checkmap.size()){
    //     cout<<checkmap[x].first<<" "<<checkmap[x].second<<endl;
    // }
    // cout<<"kuchbhi"<<endl;
    // forl(x,0,kuchbhi.size()){
    //     cout<<kuchbhi[x].first<<" "<<kuchbhi[x].second<<endl;
    // }
    sort(checkmap.begin(), checkmap.end(), greater<pair<int,int>>());
    sort(kuchbhi.begin(), kuchbhi.end());

    int put=l+1;
    put-=checkmap.size();
    forl(i,0,checkmap.size()){
        int index=checkmap[i].second;
        ans1[index]=put;
        put++;
    }
    put=l-checkmap.size();
    forl(i,0,kuchbhi.size()){
        ans1[kuchbhi[i].second]=put--;
    }
    // printarr(ans1);




    checkmap.clear();
    kuchbhi.clear();





    forl(i,1,l-1){
        kuchbhi.push_back({arr[i],i});
        i++;
        if(i<l-1) checkmap.push_back({check[i],i});
    }
    kuchbhi.push_back({arr[0],0});
    kuchbhi.push_back({arr[l-1],l-1});
    // cout<<"checkmap"<<endl;
    // forl(x,0,checkmap.size()){
    //     cout<<checkmap[x].first<<" "<<checkmap[x].second<<endl;
    // }
    // cout<<"kuchbhi"<<endl;
    // forl(x,0,kuchbhi.size()){
    //     cout<<kuchbhi[x].first<<" "<<kuchbhi[x].second<<endl;
    // }
    sort(checkmap.begin(), checkmap.end(), greater<pair<int,int>>());
    sort(kuchbhi.begin(), kuchbhi.end());

    put=l+1;
    put-=checkmap.size();
    forl(i,0,checkmap.size()){
        int index=checkmap[i].second;
        ans2[index]=put;
        put++;
    }
    put=l-checkmap.size();
    forl(i,0,kuchbhi.size()){
        ans2[kuchbhi[i].second]=put--;
    }
    // printarr(ans2);

    // cout<<endl;





    int sc1=countLocalMaximums(arr,ans1,l);
    int sc2=countLocalMaximums(arr,ans2,l);

    if(sc1>sc2){
        printarr(ans1);
    }
    else {
        printarr(ans2);
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