#include <stdio.h>
#include <math.h>


int main()
{
    int testcases;
    int x,n;

    scanf("%i",&testcases);
    for(int i = 0;i < testcases; i++)
    {
        scanf("%i %i",&n,&x);

        switch (n%2)
        {
        case 1: 
            if(x%2 == 0)
            printf("no\n");

            else
            printf("yes\n");
            break;
        case 0:
            printf("yes\n");
        default:
            break;
        }
    }

    return 0;
}






