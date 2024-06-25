#include<stdio.h>
int main(){
    int x,a,b,c;
    scanf("%d",&x);
    while(x--){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a==(b+c)|| b==(a+c) || c==(a+b)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        } 
    }
}