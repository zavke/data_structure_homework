#include<stdio.h>
#include<stdlib.h>
int main (void)
{
float a,b;/*�ŧi*/
char ch,r;/*�ŧi*/

do{                                       
	printf("�п�J�B�⦡(�p:2+3): ");
    	scanf("%f %c %f",&a,&ch,&b);/*Ū�B�⦡*/
  
switch(ch)/*�P�_��J���B��*/ 
    	{
      	case '+':/*�[�k*/ 
        	printf("%f + %f = %f",a,b,a+b);/*�K�X�p���ƭ�*/
        	break;
      	case '-':/*��k*/ 
        	printf("%f - %.f = %f",a,b,a-b);/*�K�X�p���ƭ�*/
        	break;
      	case '*':/*���k*/ 
        	printf("%f * %f = %f",a,b,a*b);/*�K�X�p���ƭ�*/
        	break;   
      	case '/':/*���k*/ 
        	printf("%f / %f = %f",a,b,a/b);/*�K�X�p���ƭ�*/
        	break;    
      	default:       
        printf("�L�k���Ѫ��B�⦡\n");
    	}
		printf("\n");
		printf("�������п�Jq�F�~��п�J���N��:");
		scanf(" %c",&r);    
}while(r!='q');/*�P�_�O�_�~��*/ 
system("pause");
return 0 ;
}
