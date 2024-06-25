#include <array>
#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> vect;
    vector<long long> arr;
    long long a,b;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>b;
        vect.push_back(b);
        //cout<<vect[i]<<" ";
    }
    sort (vect.begin(),vect.end());
    
    // long long profit=-1;
    
    for (int i=0;i<a;i++){
        int c=vect[i]*(a-i);
        arr.push_back(c);
        // cout<<arr[i];
        // profit=max(profit,vect[i]*(a-i));
    }
    sort (arr.begin(),arr.end());

    cout<<arr[a-1];
    return 0;
}
