#include<stdio.h>
int main()
{
long n;
int c=0;
scanf("%ld",&n);
while(n!=0){
    if(n%2==1){
        c++;
    }
    n=n/2;
}
printf("%d",c);
}
