#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[100][100]={"1","007","49","100","11","2","15"},t,s1[100]=" ";
int n=7,i,j=0,k;
    for(i=0;i<n;i++)
    {
        while(s[i][j] == '0')
        {
            for(k=0; k<strlen(s[i]); k++)
            {
                s[i][j] = s[i][j+1];
                j++;
            }
            j=0;
        }
        j=0;
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(strcmp(s[i], s[j])>0 &&strlen(s[i]) == strlen(s[j]) || strlen(s[i]) > strlen(s[j]))
            {
                strcpy( s1, s[i]);
                strcpy( s[i], s[j]);
                strcpy( s[j], s1);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%s ",s[i]);
    }
}
