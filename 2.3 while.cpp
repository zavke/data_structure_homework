#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i=1, sum=0;
    	while(i<=1000)       
	{
		if (i%2==1&&i%3!=0)/*�P�_�O�_�ƥB���O�T������*/  
 		{ 
   		sum+=i;/*�[�`*/ 
		} 
   	i++;
	}
printf("%d",sum);/*�K�X�[�`��ƭ�*/
system("pause");
return 0 ;
}
