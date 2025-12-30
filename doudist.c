#include <stdio.h>
#include <math.h>

int main()
{
    int testcases;
    int n;
    int array[n];
    int count = 0;
    for(int i=0;i<testcases;i++)
    {
        scanf("%i",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%i",&array[j]);
        }
        
        for(int k = n;k>=0;k--)
        {
            for(int j=0;j<k;j++)
            {
                if(array[j]<array[j+1])
                {
                    continue;
                }

                else
                {
                    int test;
                    test = array[j];
                    array[j] = array[j+1];
                    array[j+1] = test;
                }
            }
        }

        for(int j=1;j<n;j++)
        {
            int a = array[j+1];
            int b = array[j];
            int c= array[j-1];
            if(a - b == 2*(b-c) || b-c == 2*(a-b))
            {
                count+=1;
            }

            else
            continue;
        }

        if(count == n-2)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
        
        count = 0;


    }

    return 0;
}