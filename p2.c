#include<stdio.h>
int main(){
    int n,i,f=1;
    printf("enetr the no: ");scanf("%d",&n);
    if(n==0)puts("1");
    for ( i = 1; i < n; i++)
    {
        f=f*i;
        printf("%d",f);
    }
    
}