#include<stdio.h>
#include<stdbool.h>
int factorial(int z)
{
    // single line to find factorial
    return (z==1 || z==0) ? 1: z * factorial(z - 1); 
}
int main()
{
   int a[3]={1,2,3},n=3,r=1,i,j,p=3,x,y,k,z;
   bool b[3];
   while(n>=r)
   {
       x=factorial(n);
       y=factorial(r);
       z=factorial(n-r);
       p=x/(y*z);
       for(i=0;i<p;i++)
       {
           
          for(j=0;j<r;j++)
          {
           if(r==1)
               {
                 printf("%d",a[i]);
                 printf("\n");
               }
           else
            {
               k=i;
               for(j=0;j<r;j++)
               {
                   printf("%d ",a[i]);
                   k=k+1;
                   if(b[k]==true)
                   {
                      printf("%d",a[k]);
                      b[k]=false;
                   }
               }
               printf("\n");
            }
           }
       }
       r++;
   }
}
