#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
main(void)
{
int a,i,*c,j;/*�ŧi*/
        i=0;/*�ŧi*/
        c=(int*)malloc(99999999*sizeof(int));/*�ŧi*/
do
{
	printf("�п�J�@�ӥ����:�H�t�Ƶ���");
        scanf("%d",&a);/*Ū�ƭ�*/
        *(c+i)=a;
        i++; 
}
while(a>=0);
        printf("�q�j��p�̧Ǭ��G");/*�j�p����Ʀ�*/
        	for (j=1;*(c+j)!=-1;j++)
        	{
        		for (i=0;*(c+i)!=-1;i++)
        		{
        			if(*(c+i)>*(c+j))
        				{
        					a=*(c+i);
        					*(c+i)=*(c+j);
        					*(c+j)=a;
        				}
        		}
        	}
        for(i=0;;i++)
        {
        	if(*(c+i)==-1)
        	break;
        	printf(" %d ",*(c+i));
        }
        printf("\n");/*�K�X�Ƨǫ�ƭ�*/
        free(c);/*����O����*/
system("pause");
return 0;
}
