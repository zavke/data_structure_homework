#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;/*�ŧi*/
scanf("%d",&a);/*Ū�ƭ�*/
int i,j;/*�ŧi*/
int flag=0;/*�ŧi*/
int b;/*�ŧi*/

	for(j=1;j<=a;j++)/*�j���J�ƭȦ���*/
	{
		flag=0;

		for(i=2;i<j;i++)/*�j���J�ƭ�+1����*/
		{
			if(j%i==0)/*�P�_�ƭȬ۰���O�_����s*/
			{
				flag =1;
				break;
			}
		}
		if(flag==0)/*�q�L0,1�P�_�ƭȬO�_���0=��ƶK�X*/
		printf("%d\n",j);/*�K�X�P�_��ƭ�*/

	}

system("pause");
return 0;
}
