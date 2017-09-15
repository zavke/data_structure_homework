#include<stdio.h>
#include<stdlib.h>
int main (void)
{
int a,b,i,max,min;/**/
	printf("叫块タ俱计a:");    
	scanf("%d",&a);/*弄计a*/
	printf("叫块タ俱计b:");    
	scanf("%d",&b);/*弄计b*/
 
for(i=1;i<=a&&i<=b;i++)/*癹伴块2计Ω计*/                  
	{
    		if(a%i==0&&b%i==0)/*тㄢタ俱计程そ计*/
    		max=i;
  	}
min=(a*b)/max;/*тㄢタ俱计程そ计*/ 

printf("程そ计: %d \n",a,b,max);/*禟程そ计计*/
printf("程そ计: %d \n",a,b,min);/*禟程そ计计*/ 
system("pause");
return 0 ;
}
