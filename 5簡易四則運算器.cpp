#include<stdio.h>
#include<stdlib.h>
int main (void)
{
float a,b;/*宣告*/
char ch,r;/*宣告*/

do{                                       
	printf("請輸入運算式(如:2+3): ");
    	scanf("%f %c %f",&a,&ch,&b);/*讀運算式*/
  
switch(ch)/*判斷輸入的運算*/ 
    	{
      	case '+':/*加法*/ 
        	printf("%f + %f = %f",a,b,a+b);/*貼出計算後數值*/
        	break;
      	case '-':/*減法*/ 
        	printf("%f - %.f = %f",a,b,a-b);/*貼出計算後數值*/
        	break;
      	case '*':/*乘法*/ 
        	printf("%f * %f = %f",a,b,a*b);/*貼出計算後數值*/
        	break;   
      	case '/':/*除法*/ 
        	printf("%f / %f = %f",a,b,a/b);/*貼出計算後數值*/
        	break;    
      	default:       
        printf("無法辨識的運算式\n");
    	}
		printf("\n");
		printf("停止執行請輸入q；繼續請輸入任意鍵:");
		scanf(" %c",&r);    
}while(r!='q');/*判斷是否繼續*/ 
system("pause");
return 0 ;
}
