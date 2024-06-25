#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
//#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
int freq(int arr[],int l,int x){
    int c=0;
    forl(i,0,l){
        if(arr[i]==x){
            c++;
        }
    }
    return c;
}
void solve(){
    int l,t;cin>>l;
    int arr[l];
    // int chk[l];
    // map<int,int> mp;
    set<int> st;
    forl(i,0,l){
        cin>>t;
        arr[i]=t;
        st.insert(t);
        // chk[i]=t;
        // mp[arr[i]]++;
    }
    // forl(i,0,l){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    // forl(i,0,l){
    //     cout<<chk[i]<<" ";
    // }cout<<endl;

    int sum=0,c=0;t=0;
    forl(i,0,l){
        sum=arr[i];
        forl(j,i+1,l){
            sum+=arr[j];
                // cout<<sum<<" "<<t<<endl;
            
            if(st.find(sum)!=st.end()){
                // cout<<sum<<" "<<t<<endl;
                c+=freq(arr,l,sum);
                // mp[t]++;
                // cout<<sum<<endl;
                st.erase(st.find(sum));
            }
        }
        sum=0;
    }
    cout<<c<<endl;

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