#include <stdio.h>

int main()
{
    int k,S;
    int s = 0;
    int ans=0;
    int testcases;
    scanf("%i",&testcases);
    for(int j =0;j<testcases;j++)
    {
        int n;
        scanf("%i %i %i",&n,&k,&S);
        int array[n];
        for(int i = 0;i++;i<n)
        {
            array[i] = 2*n + 1;
            s = s + array[i];
        }

        for(int i = 0;i++;i<n)
        {
            if(array[i]*(k-1) == (S-s))
            {
                ans = array[i];
                break;
            }

            else
            continue;
        }

    printf("%i\n",ans);        
    }

    return 0;
}