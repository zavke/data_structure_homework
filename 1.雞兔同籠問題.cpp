#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int n,r,c ;/*�ŧin����J�ƭ�r�O���ߪ��ƥ�c�O�������ƥ�*/ 
do{                       /*�P�_��J�榡�O�_���T*/ 
	printf("�п�JŢ���X�@���h�ְ��}:");
     	scanf("%d",&n);/*Ū��J�s�����X���}���ƭ�*/ 

     	if(n<0&&n%2!=0)/*�P�_�榡*/ 
     		printf("��J���~,�Э��s��J \n");
}while(n%2!=0);
      
    	if(n==0)/*Ţ�l�̭��S���}*/  
     		printf("Ţ���S�����Ψ�\n");
     	else if(n!=0)/*�C�XŢ���i��զX*/ 
    		{
      			printf("Ţ���i�঳\n");
      			r=0;/*�]�ߤl0��*/  
       			while(4*r <= n)/*�C�X�զX*/ 
       			{              
         			c = (n-4*r)/2;/*�����ƶq���`�}�ƴ�ߤl�}���ƶq�A���H2*/            
         			printf(" %d����%d���� \n",r,c);
         			r++;                          
       			}
    		}
system("pause");
}
