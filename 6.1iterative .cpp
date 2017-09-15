#include <stdio.h>
#include <stdlib.h>
void multiply (int,int *a);     /*宣告multiply函數*/
main()
{
int n;           /*宣告*/
int a[10000];    /*宣告*/
int i,j;         /*宣告*/
int flag;        /*宣告*/

	printf("請輸入一個正整數N，計算N! :");     /*輸入N階層*/ 
	scanf("%d",&n);
	printf("%d! = ",n);

  	for(j=1;j<n;j++)                 /*輸出1x2x...xn*/
    		printf("%d x ",j);
  		printf("%d = ",n); 

  	for(i=0;i<10000;i++)   /*歸零陣列*/
    		a[i]=0;
		a[9999]=1;    /*預設a[9999]=1*/

multiply(n,a);      /*函數;大數乘法運算*/

  	for(i=0;i<10000;i++)   /*迴圈印出處理*/
  	{
    		flag=0;
    		if(a[i]!=0)          /*數字0輸出處理*/ 
      			flag=1;
   
    		if(flag==1)
      			printf("%d",a[i]);
  	}
  
printf("\n");   
system("pause");
  
}


void multiply(int n, int *a)    /*大數乘法函數*/
{
  int i,j,tmp,carry=0;  /*宣告變數*/

  for(j=0;j<n;j++)   /*計算階層*/
  {
    for(i=10000-1;i>=0;i--)        /*陣列進位運算*/
    {
      tmp=a[i]*(n-j)+carry;
      a[i]=tmp%10;
      carry=tmp/10;
    }
  }
}
