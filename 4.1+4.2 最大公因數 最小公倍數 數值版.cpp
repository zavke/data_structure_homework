#include<stdio.h>
#include<stdlib.h>
int main (void)
{
int a,b,i,max,min;/*�ŧi*/
	printf("�п�J�����a:");    
	scanf("%d",&a);/*Ū�ƭ�a*/
	printf("�п�J�����b:");    
	scanf("%d",&b);/*Ū�ƭ�b*/
 
for(i=1;i<=a&&i<=b;i++)/*�j���J2�ӼƭȦ���*/                  
	{
    		if(a%i==0&&b%i==0)/*��X��ӥ���ƪ��̤j���]��*/
    		max=i;
  	}
min=(a*b)/max;/*��X��ӥ���ƪ��̤p������*/ 

printf("�̤j���]��: %d \n",a,b,max);/*�K�X�̤j���]�Ƽƭ�*/
printf("�̤p������: %d \n",a,b,min);/*�K�X�̤p�����Ƽƭ�*/ 
system("pause");
return 0 ;
}
