#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[100],r[10];
int i,j=0,count[10];
scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
        {
            count[j]++;
        }
        else
        {
            r[j]=s[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%c%d", r[i], count[i]+1);
    }
}
