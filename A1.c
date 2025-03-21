#include<stdio.h>
int main(){
    int n,i=1;
    scanf("%d",&n);
    if(n<0)printf("-",n=-n);
    do
    {
        int r=n%10;
        printf("%d",r);
        n=n/10;
    } while (n);
    
    return 0;

}