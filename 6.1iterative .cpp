#include <stdio.h>
#include <stdlib.h>
void multiply (int,int *a);     /*�ŧimultiply���*/
main()
{
int n;           /*�ŧi*/
int a[10000];    /*�ŧi*/
int i,j;         /*�ŧi*/
int flag;        /*�ŧi*/

	printf("�п�J�@�ӥ����N�A�p��N! :");     /*��JN���h*/ 
	scanf("%d",&n);
	printf("%d! = ",n);

  	for(j=1;j<n;j++)                 /*��X1x2x...xn*/
    		printf("%d x ",j);
  		printf("%d = ",n); 

  	for(i=0;i<10000;i++)   /*�k�s�}�C*/
    		a[i]=0;
		a[9999]=1;    /*�w�]a[9999]=1*/

multiply(n,a);      /*���;�j�ƭ��k�B��*/

  	for(i=0;i<10000;i++)   /*�j��L�X�B�z*/
  	{
    		flag=0;
    		if(a[i]!=0)          /*�Ʀr0��X�B�z*/ 
      			flag=1;
   
    		if(flag==1)
      			printf("%d",a[i]);
  	}
  
printf("\n");   
system("pause");
  
}


void multiply(int n, int *a)    /*�j�ƭ��k���*/
{
  int i,j,tmp,carry=0;  /*�ŧi�ܼ�*/

  for(j=0;j<n;j++)   /*�p�ⶥ�h*/
  {
    for(i=10000-1;i>=0;i--)        /*�}�C�i��B��*/
    {
      tmp=a[i]*(n-j)+carry;
      a[i]=tmp%10;
      carry=tmp/10;
    }
  }
}
