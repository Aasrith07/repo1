#include <stdio.h>
#include <math.h>


int main()
{
    int testcases,x,n,a;
    int final,flag1 =0,flag2 =0;
    for(int i = 0;i<testcases;i++)
    {
        scanf("%i %i",&n,&x);
        if(x%2 == 0)
        {
            for(int j = 0;j<n;j++)
            {
                if(x == 2*j)
                {
                    flag1+=1;
                    break;
                }

                else
                continue;
            }
        }
        if(x%2 != 0)
        {
            for(int j= 0;j<n;j++)
            {
                if(x == 2*j + 1)
                {
                    a = n - x;
                    if(a%2 == 0)
                    {
                        for(int j = 0;j<a;j++)
                        {
                        if(a== 2*j)
                        {
                            flag1+=1;
                            break;
                        }

                        else
                        continue;
                        }
                    }
                    else
                    {
                        flag2+=1;
                    }
                
                }
            }
        }

}
}