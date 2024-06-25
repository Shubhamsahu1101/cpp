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
bool isPerfectSquare(int number) {
    // Check if the number is non-negative
    if (number < 0) {
        return false;
    }

    // Calculate the square root
    int squareRoot = static_cast<int>(sqrt(number));

    // Check if the square of the square root is equal to the original number
    return squareRoot * squareRoot == number;
}
void solve(){
    int l;
    cin>>l;
    int sum=0;
    int t;
    forl(i,0,l){
        cin>>t;
        sum+=t;
    }
    if(isPerfectSquare(sum)){
         yes;
         return;
    }
    no;
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