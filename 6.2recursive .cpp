#include <stdio.h>
#include <stdlib.h>
int fac (int);     /*�ŧi���*/
main()
{
int n;        /*�ŧi*/
int i;        /*�ŧi*/

printf("�п�J�@�ӥ����N�A�p��N! :");     /*��JN���h*/ 
scanf("%d",&n);

printf("%d! = ",n);
  
  	for(i=1;i<n;i++)                 /*��X1x2x...xn*/
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

