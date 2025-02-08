#include<stdio.h>
int main(){
    int r,c,n,a=1;
    printf("enter the r & c value:  ");scanf("%d",&n);
    for (r = 1; r <=n; r++)
    {
        for ( c = 1; c <=n; c++)
        {
            printf("%3d",a);
            a++;
        }
        printf("\n");
        
    }
    return 0;
}
// output:
// 12345
// 678910
// 1112131415
