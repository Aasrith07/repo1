#include <stdio.h>
int main()
{
    int testcases,n;

     scanf("%i",&testcases);

    for(int j=0;j<testcases;j++)
    {
        float sum = 0;
        int flag =0;
        scanf("%i",&n);
        int array[n];
        for(int i=0;i<n;i++)
        {
            scanf("%i",&array[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            sum = sum + array[i];
            if(sum/(i+1)*100 == 100)
            {
                flag = flag + 1;
            }

            else
           {flag;}

        }

        printf("%i\n",flag);
        
    }   

    return 0;
}