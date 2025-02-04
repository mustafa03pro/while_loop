#include<stdio.h>
void main(){
    int i=1,n,factorial=1;
    printf("enetr the no: ");scanf("%d",&n);
    while (n>=i)
    {
        factorial*=n;
        printf("%d",n);

        n--;
    }
    printf("factorial=%d",factorial);
    
}