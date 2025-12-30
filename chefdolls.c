#include <stdio.h>

int main()
{
    int testcases;
    int a,final;

    scanf("%i",&testcases);

    for(int i=0; i<testcases; i++)
    
    {
        int n;
        scanf("%i",&n);
        int type[n];
        for(int j=0;j<n;j++)
        {
            scanf("%i",&type[j]);
        }
        for(int k=n;k>0;k--)
        {
            for(int j=0;j<k;j++)
            {
                if(j+1<k)
                {
                if(type[j]>type[j+1])
                {   
                    a = type[j];
                    type[j] = type[j+1];
                    type[j+1] = a;
                }
                
                else
                continue;
                }
                else
                break;
            }    
        }

        for(int j=0;j<n;j++)
        {
            if(type[2*j]==type[2*j+1])
            continue;

            else
            {
                final = type[2*j];
                break;
            }
        }

    printf("%i\n",final);
    }
    
    return 0;
}