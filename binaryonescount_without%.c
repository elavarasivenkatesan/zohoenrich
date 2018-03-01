#include<stdio.h>
#include <stdlib.h>

int main()
{
 int n,t;
 int c=0;
 scanf("%d",&n);
 t=n;
 while(t>0){
    t=t>>1;
    t=t<<1;
    if((n-t)==1){
        c++;
    }
    n=t>>1;
    t=n;
 }
printf("%d",c);
}
