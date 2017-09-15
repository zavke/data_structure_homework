#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;/**/
     printf("块タ俱计 n\n");
     scanf("%d",&n);/*弄计*/
int i;/**/
         if(n>0)/*耞ㄏノ块计琌箂*/
                {
                 for(i=1;i<=n;i++)/*癹伴块计Ω计*/
                 {
                 	if(n%i==0){/*耞计琌Nタ计*/
                 	printf("%d\n",i);/*禟耞计*/
                 	}
                 }
                 }
         else
                 {printf("EORROR");
                 }
                 system("pause");
                 return 0;
}
