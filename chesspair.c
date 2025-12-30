#include <stdio.h>

int main()
{
    int testcases, n, x,b,c;

    scanf("%i",&testcases);

    for(int j=0;j<testcases;j++)
    { 
        scanf("%i %i",&n,&x);
        b = 2*n - x;
        c = x - b;
        if(x <= b)
        {
            printf("0\n");
        }

        else 
        {
            printf("%i\n",c);
        }
        }


        return 0;
    
    
    
    }