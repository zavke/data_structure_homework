#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;/*�ŧi*/
     printf("��J�@�ӥ���� n\n");
     scanf("%d",&n);/*Ū�ƭ�*/
int i;/*�ŧi*/
         if(n>0)/*�P�_�ϥΪ̿�J�ƭȬO�_�j��s*/
                {
                 for(i=1;i<=n;i++)/*�j���J�ƭȦ���*/
                 {
                 	if(n%i==0){/*�P�_�ƭȬO�_N�����]��*/
                 	printf("%d\n",i);/*�K�X�P�_��ƭ�*/
                 	}
                 }
                 }
         else
                 {printf("EORROR");
                 }
                 system("pause");
                 return 0;
}
