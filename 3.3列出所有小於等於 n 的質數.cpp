#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;/**/
scanf("%d",&a);/*弄计*/
int i,j;/**/
int flag=0;/**/
int b;/**/

	for(j=1;j<=a;j++)/*癹伴块计Ω计*/
	{
		flag=0;

		for(i=2;i<j;i++)/*癹伴块计+1Ω计*/
		{
			if(j%i==0)/*耞计埃琌单箂*/
			{
				flag =1;
				break;
			}
		}
		if(flag==0)/*硄筁0,1耞计琌借计0=借计禟*/
		printf("%d\n",j);/*禟耞计*/

	}

system("pause");
return 0;
}
