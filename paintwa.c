#include <stdio.h>

int main()
{
    int testcases, X,Y,Z, total;
    scanf("%i",&testcases);

    for(int i=0;i<testcases;i++)
    {
        scanf("%i %i %i",&X,&Y,&Z);

        total = Z/(2*(X*Y));

        printf("%i\n",total);
        
    }

    return 0;
}