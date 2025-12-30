#include <stdio.h>

int main()
{
    int testcases;
    int a,b,x;
    int flag = 0;

    scanf("%i",&testcases);

    for(int i=0; i<testcases; i++)
    {
        scanf("%i %i %i",&a,&b,&x);

        if(a>b)
        flag=1;

        else if(a == b)
        break;

        else
        flag = 2;

        if(flag==1)
        {
            for(int j=1;j<(a-b);j++)
            {
                if(a!=b)
                {
                a = a-j;
                b = b+j;
                }

                else
                break;
            }

        }

        else if ( flag == 2)
        {
            for(int j=1;j<(b-a);j++)
            {
                if(a!=b)
                {
                    a = a+j;
                    b = b - j;
                }

                else 
                break;
            }
        }

        else
        continue;

        if(a == b || flag == 0)
        {
            printf("yes\n");
        }

        else
        printf("no\n");
        
        flag = 0;
        }

    return 0;    
    }    
    