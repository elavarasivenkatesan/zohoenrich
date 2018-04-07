#include<stdio.h>
#include<string.h>

void longestuniqsubstring(char s[])
{
  int i,j,c=0,a=1,b=0,p=0,x,y;
  char res[100];
  
  for(i=a;i<strlen(s);i++)
  {
      for(j=b;j<i;j++)
      {
        if(s[i]!=s[j])
        {
            c++;
        }
        else
        {
            a=i+1;
            b=j+1;
        }
      }
      if(c>p)
      {
          x=j;//points to the end point of longest unique substring
          
          y=j-c;//points to the starting point of longest unique substring
          
          p=c;//maximum length of the unique substring
      }
      c=0;
  }
  for(i=y;i<=x;i++)
  {
      res[c++]=s[i];
  }
  
  printf("%s",res);
}
int main()
{
  char s[100],res[100];
  scanf("%s",s);
  longestuniqsubstring(s);
}
