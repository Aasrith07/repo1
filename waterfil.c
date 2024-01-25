#include <stdio.h>

int main()
{
	int chef[3],sum;
	int testcases;
    
    scanf("%d",&testcases);
	
    for(int j = 0;j<testcases; j++)
	
	{
		sum = 0;	
    	scanf("%d",&chef[0]);
		scanf("%d",&chef[1]);
		scanf("%d",&chef[2]);
	
    	for(int i=0;i<3;i++){
		    sum += chef[i];
		}
		if(sum < 2){
		    printf("Water filling time\n");
		}
		else{
		    printf("Not now\n");
		}	
    }
	return 0;
}
