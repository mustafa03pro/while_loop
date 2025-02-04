#include<stdio.h>
int main(){
    int n;
    printf("enetr the no: ");scanf("%d",&n);
    while (n>=0)
    {
        if(n%2==0){
             printf("%d\n",n);

        }
        

        n--;
    }
    printf("\n");
    return 0;
    
    
}