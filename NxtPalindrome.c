#include<stdio.h>
#include<stdlib.h>
int digits(int n)
{
    int t,c=0;
    t=n;
    while(t!=0)
    {
        c++;
        t=t/10;
    }
    return c;
}
int palindrome(int n,int x)
{
    int power,k,j=1;
    if(reverse(n)==n)
    {
        return n;
    }
    else
    {
        k=pow(10,x/2);
        if(x%2!=0)
        {
            j=10;
        }
        n=((n/k)*k)+reverse(n/(k*j));//to find the palindrome number
    }
}
int reverse(int n)
{
    int p=0;
    while(n>0)  
    {
        p=(p*10)+(n%10);
        n=n/10;
    }
    return p;
}
int nextpalindrome(int n)
{
    int x,k,r;
    
    x=digits(n);
    if(x==1)
    {
        if(n%10==9)
        {
            printf("%d",n+2);
            return 0;
        }
        printf("%d",++n);
        return 0;
    }
    if(x==2)
    {
        if(n%10==9)
        {
            printf("%d",n+2);
            return 0;
        }
        printf("%d",n+11);
        return 0;
    }
    else
    {
        n=palindrome(n,x);
        k=x/2;
        if(x%2==0)
        {
            r=n+(11*pow(10,k-1));
            printf("%d",r);
        }
        else
        {
            r=n+(1*pow(10,k));
            printf("%d",r);
        }
    }
}
int main()
{
   int n;
   scanf("%d",&n);
   nextpalindrome(n);
}
