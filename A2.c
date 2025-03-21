#include<stdio.h>
int main(){
    int n,i=1;
    scanf("%d",&n);
   
   while (n){
    if(n%100<10  && n>9)printf("0");
    printf("%d ",n%100);n=n/100;

   }
    
    return 0;

}