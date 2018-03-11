#include<stdio.h>
#include <stdlib.h>

float result(int n,float a[n][n])
{
    int i;
    float res=1;
    for(i=0; i<n; i++)
    {
        res *= a[i][i];
    }
    return res;
}

float det_calculate(int n,float a[n][n])
{
    int i,j,k;
    float x,rem;
    
    if(a[n-1][0] == 0 || a[n-1][1] == 0 || a[n-2][0] == 0)
    {
       x = result( n, a);
    }
    else
    {
       for(i=1; i<n; i++)
	    {
		    for(j=0; j<i; j++)
		    {
			    rem = a[i][j] / a[j][j];
			    for(k=0; k<n; k++)
			    {
				    a[i][k] = a[i][k] - (rem * a[j][k]);
			    }
		    }
	    }
	    x = result( n, a);
    }
    return x;
}
int main()
{
    int i,j,n;
    scanf("%d\n",&n);
    float a[n][n];
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%f\t", &a[i][j]);
        }
        printf("\n");
    }
    printf("%f",det_calculate(n,a));
}
