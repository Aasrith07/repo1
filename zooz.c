#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     long int testcases,n;
     long int final;


    scanf("%i",&testcases);

    for(int j=0;j<testcases;j++)
    {
       scanf("%i",&n);
       char str[n];
       for(int i = 0;i<n;i++)
       {
            if(i == 0)
            {
                printf("1");
            }

            else if (i == n -1)
            {
                printf("1\n");
            }
            

            else
            printf("0");
       }

    //     printf("%s\n",str);
    }

    return 0;
    
}