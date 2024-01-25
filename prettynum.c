#include <stdio.h>

int main()
{
    int testcases,a,b,total=0;

    scanf("%i",&testcases);

    for(int j=0;j<testcases;j++)
    {
        scanf("%i %i",&a,&b);
        for(int i=a;i<=b;i++)
        {
            if(i%10 == 2 || i%10 == 3 || i%10 == 9){
                total=total+1;
            }

        }
        printf("%i\n",total);
        total = 0;

    }
    return 0;
}
