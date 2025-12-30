#include <stdio.h>

int main()
{
    int testcases;
    int n,p;
    int array1[n];
    char array2[n];
    int flag1 =0;
    int flag2 = 0;

    scanf("%i",&testcases);

    for(int i=0;i<testcases;i++)
    {
        scanf("%i %i",&n,&p);
        
        for(int j=0;j<n;j++)
        {
            scanf("%i",&array1[j]);
        }

        for(int j=0;j<n;j++)
        {
            if(array1[j]>=p/2)
            {
                array2[j] = 'e';
            }

            else if(array1[j]<=p/10)
            {
                array2[j] = 'h';
            }

            else
            {
                array2[j] = '*';
            }
        }

        for(int j =0;j<n;j++)
        {
            if(array2[j]=='h')
            {
                flag1+=1;
            }

            else if(array2[j]=='e')
            {
                flag2 +=1;
            }

            else
            {
                continue;
            }
        }

        if(flag1 ==2 || flag2 == 1)
        {
            printf("yes\n");
        }

        else
        {
            printf("no\n");
        }

        flag1 = 0;
        flag2 = 0;
    }

    return 0;
}