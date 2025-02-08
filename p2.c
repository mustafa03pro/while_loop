#include<stdio.h>
int main(){
    int r,c,n;
    printf("enter the r & c value:  ");scanf("%d",&n);
    for (r = 1; r <=n; r++)
    {
        for ( c = 1; c <=n; c++)
        {
            printf("%3d",c);
        }
        printf("\n");
        
    }
    return 0;
}