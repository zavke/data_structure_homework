#include<stdio.h>
#include<stdlib.h>
int main (void)
{
int a,b,i,j,max,min;/*�ŧi*/
printf("�п�J�����a:");
scanf("%d",&a);/*Ū�ƭ�a*/
printf("�п�J�����b:");
scanf("%d",&b);/*Ū�ƭ�b*/

for(i=1;i<=a&&i<=b;i++)/*�j��2�ӿ�J�ƭȦ���*/                   
	{
  		if(a%i==0&&b%i==0)/*��X��ӥ���ƪ��̤j���]��*/ 
   		max=i;
 	}
for(j=1;j<=a*b;j++)                       
 	{
  		if(j%a==0&&j%b==0)/*��X��ӥ���ƪ��̤p������*/ 
  			{  
    				min=j;
    				break; 
    			}
 	}  
printf("%d�M%d���̤j���]��: %d \n",a,b,max);/*�K�X�̤j���]�Ƽƭ�*/
printf("%d�M%d���̤p������: %d \n",a,b,min);/*�K�X�̤p�����Ƽƭ�*/
system("pause");
return 0 ;
}
