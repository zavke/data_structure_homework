#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;/*�ŧi*/
	scanf("%d",&a);
int i;/*�ŧi*/
int flag=0;/*�ŧi*/

	for(i=2;i<a;i++)/*�j���J�ƭȦ���*/
	{
		if(a%i==0)/*�P�_�ƭȬO�_���*/
			{
			printf("���O���\n");
			flag =1;
			break;
			}
	}

	if(flag==0)/*�P�_�ƭȬO�_���*/
	printf("�O���\n");
system("pause");
return 0;
}
