#include <stdio.h>

int main()
{
    int x,n;
    int seat[n][54];
    int count = 0;
    int final = 0;
    
    scanf("%i %i",&x,&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<54;j++)
        {
            scanf("%i",&seat[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<54;j++)
        {
            if(seat[i][j] == 0)
            {
                count+=1;
                if(count == x)
                {
                final +=1;
                }
                else
                {
                final;
                }
            }
        
            else
            {
                count = 0;
            }
        }
    }
    
    printf("%i",final);
    
    return 0;
    
}