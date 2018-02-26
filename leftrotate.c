#include<stdio.h>

int main()
{
char n[100];
int r,i;
scanf("%s\n%d",n,&r);
for(i=r;i<strlen(n);i++){
    printf("%c",n[i]);
}
for(i=0;i<r;i++){
    printf("%c",n[i]);
}
}
