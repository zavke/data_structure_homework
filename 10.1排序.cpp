#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
main(void)
{
int a,i,*c,j;/*宣告*/
        i=0;/*宣告*/
        c=(int*)malloc(99999999*sizeof(int));/*宣告*/
do
{
	printf("請輸入一個正整數:以負數結束");
        scanf("%d",&a);/*讀數值*/
        *(c+i)=a;
        i++; 
}
while(a>=0);
        printf("從大到小依序為：");/*大小比較排位*/
        	for (j=1;*(c+j)!=-1;j++)
        	{
        		for (i=0;*(c+i)!=-1;i++)
        		{
        			if(*(c+i)>*(c+j))
        				{
        					a=*(c+i);
        					*(c+i)=*(c+j);
        					*(c+j)=a;
        				}
        		}
        	}
        for(i=0;;i++)
        {
        	if(*(c+i)==-1)
        	break;
        	printf(" %d ",*(c+i));
        }
        printf("\n");/*貼出排序後數值*/
        free(c);/*釋放記憶體*/
system("pause");
return 0;
}
