#include <stdio.h>

int main()
{
    int testcases,p,flag = 0;
    scanf("%i",&testcases);

    for(int i=0;i<testcases;i++)
    {
        scanf("%i",&p);

        if(p == 0 || p == 1)
        {
            flag += 1;
        }

        for(int i=2;i<p;i++){

            if(p%i == 0){
                flag += 1;
                break; 
            }

            else{
                flag += 0;
            }
        }
        if(flag >= 1){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
        flag = 0;
    }
    
    return 0;
    }