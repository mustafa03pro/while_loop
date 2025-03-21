#include<stdio.h>
int main(){
    int i=1,a,b,gcd;
    scanf("%d %d",&a,&b);
    
    while (i<=a && i<=b){

        if(a%i==0 && b%i==0)gcd=i;
        i++;
    }
    printf("gcd =%d",gcd);
    
    return 0;

}