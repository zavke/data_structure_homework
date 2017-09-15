#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;/**/
	scanf("%d",&a);
int i;/**/
int flag=0;/**/

	for(i=2;i<a;i++)/*癹伴块计Ω计*/
	{
		if(a%i==0)/*耞计琌借计*/
			{
			printf("ぃ琌借计\n");
			flag =1;
			break;
			}
	}

	if(flag==0)/*耞计琌借计*/
	printf("琌借计\n");
system("pause");
return 0;
}
