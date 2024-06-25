// bs
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

void bs(){
    
}
signed main(){
    int arr[] ={2, 8, 8, 8, 8, 8, 11, 13};
    cout<<lower_bound(arr, arr+9, 8)-arr<<endl;
    cout<<upper_bound(arr, arr+9, 8)-arr<<endl;
    return 0;
}