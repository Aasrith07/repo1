#include <stdio.h>

int main()
{
    int testcases;
    int a,b;
    scanf("%i",&testcases);

    for(int i =0;i<testcases;i++)
    {
        scanf("%i %i",&a,&b);
        
        if(a%2 != 0 && b%2 !=0)
        {
            printf("no\n");
        }

        else
        {
            printf("yes\n");
        }
    }

    return 0;
}