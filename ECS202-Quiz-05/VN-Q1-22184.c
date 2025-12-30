#include <stdio.h>

int main()
{
    int n;
    int final1 = 0;
    scanf("%i",&n);


    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%i",&array[i]);
    }

    for(int i = 0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(final1 <= array[i]*array[j])
            {
                final1 = array[i]*array[j];
            }

            else
            {
                continue;
            }
        }

    }

    printf("%i",final1);

    return 0;
}