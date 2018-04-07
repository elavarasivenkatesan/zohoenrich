#include<stdio.h>
#include<string.h>

char* alphauniqsubstring(char s[],char res[])
{
  int i,j,p=0,c=0;
  
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
  c=0;
  for(i=j-p+1;i<=j+1;i++,c++)
  {
      res[c]=s[i];
  }
  
  return res;
}
int main()
{
  char s[100],res[100];
  
  scanf("%s",s);
  
  printf("%s",alphauniqsubstring(s,res));
}
