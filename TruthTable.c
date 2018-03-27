#include<stdio.h>

int main()
{
   int a=0,b=0,c=0,d,i,n=8,x=n/2-1;
   
   printf("A B C O/P\n"); 
   
   for(i=0; i<n; i++)
   {
        d=a||b||c;   
        printf("%d %d %d %d\n", a, b, c, d);
        c=!c;
        if(i%2!=0)
        {
            b=!b;
        }
        if(i==x)
        {
            a=!a;
        }
   }
   
}
