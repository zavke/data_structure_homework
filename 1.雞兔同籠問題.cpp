#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int n,r,c ;/*宣告n為輸入數值r記錄兔的數目c記錄雞的數目*/ 
do{                       /*判斷輸入格式是否正確*/ 
	printf("請輸入籠中合共有多少隻腳:");
     	scanf("%d",&n);/*讀輸入龍中有幾隻腳的數值*/ 

     	if(n<0&&n%2!=0)/*判斷格式*/ 
     		printf("輸入錯誤,請重新輸入 \n");
}while(n%2!=0);
      
    	if(n==0)/*籠子裡面沒有腳*/  
     		printf("籠中沒有雞或兔\n");
     	else if(n!=0)/*列出籠中可能組合*/ 
    		{
      			printf("籠中可能有\n");
      			r=0;/*設兔子0隻*/  
       			while(4*r <= n)/*列出組合*/ 
       			{              
         			c = (n-4*r)/2;/*雞的數量為總腳數減掉兔子腳的數量再除以2*/            
         			printf(" %d隻兔%d隻雞 \n",r,c);
         			r++;                          
       			}
    		}
system("pause");
}
