#include<stdio.h>

int main()
{
int n,i,j,k=0;
scanf("%d\n",&n);
int a[n],b[n],c[n];
    for(i=0; i<n; i++)
    {
        scanf("%d ",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                c[j]++;
                break;
            }
        }
        if(i==j)
        {
            b[k]=a[i];
            c[k]++;
            k++;
        }
    }
    for(i=0; i<k; i++)
    {
        printf("%d--->%d\n", b[i], c[i]);
    }
}
