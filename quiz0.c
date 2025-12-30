/*
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1,num[num1],case1,case2;
    scanf("%i",&num1);
    
    for(int i=0;i<num1;i++){
        scanf("%i",&num[i]);
    }
    case1 = abs(num1 - num[0]);
    for(int i=1;i<num1;i++){
        if(case1<abs(num1 - num[i])){
            case1 = abs(num1 - num[i]);
        }
        else
        continue;
    }
   
    case2 = num[1]-num[0];
   
    for(int i = 0;i<num1;i++)
    {
       
        for(int j=0;j<num1;j++)
        {
            if(case2<abs(num[i]-num[j])){
                case2 = abs(num[i]-num[j]);
            }
            else
            continue;
    }
    
    }

    if(case1>=case2){
        printf("%i",case1);
    }
    else
    printf("%i",case2);

return 0;
}
*/
#include<stdio.h>

int main()
{
    int num;
    scanf("%i",&num);
    int n = num+1;
    int pol1[n],pol2[n],finalpol[2*n];

    for(int i=0;i<n;i++){
        scanf("%i",&pol1[i]);
        scanf("%i",&pol2[i]);
    }
    
        
}

  