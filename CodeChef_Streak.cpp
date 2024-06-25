#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,maxc,maxd;
	cin>>a;
	
	while(a--){
	    cin>>b;
	    int ad[b];
	    int om[b];
	    for(int i=0;i<b;i++){
	       // cin>>ad[i];
	        cin>>om[i];
	    }
	    for(int i=0;i<b;i++){
	       // cin>>om[i];
	        cin>>ad[i];
	    }
	    
	    c=0,d=0,maxc=0,maxd=0;
	    
	    for (int i=0;i<b;i++){
	        if(ad[i] == 0){
	            if(c>maxc) maxc=c;
	            c=0;
	        }
	        if(om[i] == 0){
	            if(d>maxd) maxd=d;
	            d=0;
	        }
	        
	        if (om[i] != 0) d++;
	        if (ad[i] != 0) c++;
	        
	    }
      if(c>maxc) maxc=c;
      if(d>maxd) maxd=d;
	    
	    if(maxc>maxd){
	        cout<<"Addy"<<endl;
	    }
	    else if(maxc<maxd){
	        cout<<"Om"<<endl;
	    }
	    else if (maxc==maxd){
	        cout<<"Draw"<<endl;
	    }

	}

	return 0;
}
