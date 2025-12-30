#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testcases,n,b,c,sum1=0,sum2=0,final=0;
    int array1[c],array2[n];

    scanf("%i",&testcases);

    for(int j=0;j<testcases;j++)
    {
        scanf("%i",&n);
        c = n*(n+1)/2;
        for(int i=0;i<c;i++)
        {
            scanf("%i",&array1[i]);
        }
        for(int k=0;k<n;k++)
        {
            b = (k*(k+1)/2);
            for(int i=b;i<=(b+k);i++)
            {
                sum1+=array1[i];                
            }
            array2[k] = sum1;
            sum1 = 0;
        }
        for(int p=0;p<j;p++)
        {
            if(final < array2[j])
            {
                final = array2[j];
            }

            else 
            {
                final;
            }
        }
        printf("%i",final);

        c=0;
        n = 0;
        final = 0;
    }

    return 0;
}