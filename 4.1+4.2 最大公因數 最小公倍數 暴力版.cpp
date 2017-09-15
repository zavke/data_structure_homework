#include<stdio.h>
#include<stdlib.h>
int main (void)
{
int a,b,i,j,max,min;/**/
printf("叫块タ俱计a:");
scanf("%d",&a);/*弄计a*/
printf("叫块タ俱计b:");
scanf("%d",&b);/*弄计b*/

for(i=1;i<=a&&i<=b;i++)/*癹伴2块计Ω计*/                   
	{
  		if(a%i==0&&b%i==0)/*тㄢタ俱计程そ计*/ 
   		max=i;
 	}
for(j=1;j<=a*b;j++)                       
 	{
  		if(j%a==0&&j%b==0)/*тㄢタ俱计程そ计*/ 
  			{  
    				min=j;
    				break; 
    			}
 	}  
printf("%d㎝%d程そ计: %d \n",a,b,max);/*禟程そ计计*/
printf("%d㎝%d程そ计: %d \n",a,b,min);/*禟程そ计计*/
system("pause");
return 0 ;
}
