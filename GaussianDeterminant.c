#include<stdio.h>
#include <stdlib.h>

float UpperTriangular(int n,float a[n][n])
{
    int i,j,x=0;
    for(i=1; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[i][j]==0)
            {
                x=1;
            }
        }
    }
    return x;
}

float det_calculate(int n,float a[n][n])
{
    int i,j,k;
    float result=1,rem;
    
    if(UpperTriangular(n,a)==1)
    {
       for(i=0; i<n; i++)
       {
           result *= a[i][i];
       }
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
	    for(i=0; i<n; i++)
	    {
	        result *= a[i][i];
	    }
    }
    return result;
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
