#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i , sum=0;
    for (i=1;i<=1000;i++)/*�q1��1000����*/
    {
        if (i%2==1&&i%3!=0)/*�P�_�O�_�ƥB���O�T������*/  
    sum+=i;/*�[�`*/ 
    
    
}
printf("%d\n",sum);/*�K�X�[�`��ƭ�*/
 system("pause");
 return 0;
}
