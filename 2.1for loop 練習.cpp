#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i , sum=0;
    for (i=1;i<=1000;i++)/*從1到1000測試*/
    {
        if (i%2==1&&i%3!=0)/*判斷是奇數且不是三的倍數*/  
    sum+=i;/*加總*/ 
    
    
}
printf("%d\n",sum);/*貼出加總後數值*/
 system("pause");
 return 0;
}
