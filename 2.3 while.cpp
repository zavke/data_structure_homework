#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i=1, sum=0;
    	while(i<=1000)       
	{
		if (i%2==1&&i%3!=0)/*判斷是奇數且不是三的倍數*/  
 		{ 
   		sum+=i;/*加總*/ 
		} 
   	i++;
	}
printf("%d",sum);/*貼出加總後數值*/
system("pause");
return 0 ;
}
