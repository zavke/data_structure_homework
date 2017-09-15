#include <stdio.h>
#include <stdlib.h>
int fac (int);     /*宣告函數*/
main()
{
int n;        /*宣告*/
int i;        /*宣告*/

printf("請輸入一個正整數N，計算N! :");     /*輸入N階層*/ 
scanf("%d",&n);

printf("%d! = ",n);
  
  	for(i=1;i<n;i++)                 /*輸出1x2x...xn*/
    		printf("%d x ",i);
  		printf("%d = %d",n,fac(n)); 
 
printf("\n");        
system("pause");
  
}

int fac(int n)
{
  	if(n>0)
    		return (n*fac(n-1));
  	else                        /* 0!=1*/ 
    		return 1;
}

