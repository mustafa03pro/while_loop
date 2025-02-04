#include<stdio.h>
void main(){
    int i=0,n,sum=0;
    printf("enetr the no: ");scanf("%d",&n);
    while (n>=i)
    {
        sum+=n;
        printf("%d",n);

        n--;
    }
    printf("sum=%d",sum);
    
}