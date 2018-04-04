#include<stdio.h>
#include<string.h>

int main()
{
  char s[100],res[100];
  int i,j,k=0,p=0,c=0;
  scanf("%s",s);
  for(i=0;i<strlen(s)-1;i++)
  {
      if(s[i]<s[i+1])
      {
          c++;
      }
      else
      {
          c=0;
      }
      if(c>p)
      {
          p=c;
          j=i;
      }
  }
  for(i=j-p+1;i<=j;i++)
  {
      res[k++]=s[i];
  }
  printf("%s",res);
}
