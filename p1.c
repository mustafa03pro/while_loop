#include<stdio.h>
int main(){
    int r,c;
    printf("enter the r & c value:  ");scanf("%d%d",&r,&c);
    for (r = 1; r <=3; r++)
    {
        for ( c = 1; c <=4; c++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
}