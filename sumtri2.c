#include<stdio.h>
#include <math.h>

int main()
{
    int testcases,c,n;
    int sum = 0;


    scanf("%i",&testcases);

    for(int j=0;j<testcases;j++)
    {
        scanf("%i",&n);
        int array1[n][n];
        int array2[n][n];

        for(int i = 0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j<=i)
                {
                scanf("%i",&array1[i][j]);
                } 

                else
                {
                    array1[i][j]=0;
                }
            }
        }
            for(int i = n-2;i>=0;i--)
            {
                for(int j = 0;j<=i;j++)
                {   
                   if(array1[i+1][j] > array1[i+1][j+1])
                   {
                    array1[i][j] = array1[i+1][j] + array1[i][j];
                   }
                    else
                    {
                        array1[i][j] = array1[i+1][j+1] + array1[i][j];
                    }
                }
            }
        
        printf("%i\n",array1[0][0]);
        }

    return 0;
    }