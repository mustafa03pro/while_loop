#include<stdio.h>
int main(){
    int r,c,n;
    printf("enter the n value:  ");scanf("%d",&n);
    for (r = 1; r <=n; r++)
    {
        for ( c = 1; c <=n; c++)
        {
            if(r%2==0){
                printf("%3c",96+c);

            }
            else{
                printf("%3c",64+c);

            } 
        }
        printf("\n");
        
    }
    return 0;
}
// o/p 
//  A   B   C   D   E
// `   a   b   c   d
// A   B   C   D   E
// `   a   b   c   d
// A   B   C   D   E