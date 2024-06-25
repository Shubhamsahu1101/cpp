#include <iostream>
#include <climits>
using namespace std;

void click(){
    char arr[6]={'c','o','d','e','h','f'};
    int arr1[6]={0};
	string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='c') arr1[0]++;
            else if(s[i]=='o') arr1[1]++;
            else if(s[i]=='d') arr1[2]++;
            else if(s[i]=='e') arr1[3]++;
            else if(s[i]=='h') arr1[4]++;
            else if(s[i]=='f') arr1[5]++;
        }
    }
    arr1[0]/=2; arr1[3]/=2;
    int m=INT_MAX;
    for(int i=0;i<6;i++){
        m=min(m,arr1[i]);
    }
    cout<<m<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    click();
	}
	return 0;
}