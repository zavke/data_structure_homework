#include <stdio.h>
#include <stdlib.h>
char ans(char);    /*�ŧi���*/ 
int main (void)
{
char n='1';/*�ŧi*/ 
printf("���էA�O���@���]��\n");
printf("\n");
  
while(n!='0')/*�@���A�����㦡���G*/ 
    n=ans(n);  
   
system("pause");      
}

char ans (char a)/*���,�U�D�D��*/ 
{
char s;/*�ŧi*/ 
	switch(a)/*�D��*/ 
  	{
    			case '1':
      				printf("1�B�b�Q�װϤ��A�p�G���H��A�ҵo�����פj�O�R�ѡA�Ʀܤf�X�c���A�A�������|�O�G\n");
      				printf("A�B�j�a�������צۥѡA�H�K�L�I\n");
      				printf("B�B���ضW���n�A���L�٬O�o�������סA�d���ХL�ۭ��n�F�C\n");
      				printf("C�B�d����H�~�M���|�ڡA��M�@�w�n�|�^�h�I\n");
      				printf("D�B��S�̡A�s���ͦb�����W�@�_��ϥL�C\n"); 
      				printf("���(�Ha,b,c,d�@��): ");
      			scanf(" %c",&s);/*��J����*/           
      			printf("\n");
      
      		switch(s)/*�������U�@�D*/ 
      		{
        		case 'a':
          			return '2';
          		break;
        		case 'b':
          			return '3';
          		break;
        		case 'c':
          			return '4';
          		break;
       		 	case 'd':
          			return '2';
          		break;
      		}
      		break;    
    
    			case '2':
      				printf("2�B�bKTV�w�۱o��high�ɡA���J����M���F�F�A�n�����������A��^���W�N�F�U�ӡA�o�ɧA�|�G\n");
      				printf("A�B���ӬO�u�������D�A�j�a���ְʤ��ˬd�ݬݡC\n");
      				printf("B�B�֡H�O�֦b�d���H�@�w�O�b�����H�G�N�o�áI\n");
      				printf("C�B�����I�s�A�ȤH���ӡA�ڭn�ȶD�I\n");
      				printf("D�B��F�A���ۤF�A�u�����C\n");  
      			printf("���(�Ha,b,c,d�@��): ");
      			scanf(" %c",&s);                                 
      			printf("\n");
      
      		switch(s)
      		{
        		case 'a':
          			return '3';
          		break;
        		case 'b':
          			return '5';
          		break;
        		case 'c':
          			return '4';
          		break;
        		case 'd':
          			return '6';
          		break;
      		}
      		break;
          
    			case '3':    
      				printf("3�B�@�}�l�S�p�����B�ͳ̪�X���ܱo�ܤj��A�M�L�X�h�ѬO���w�R��ЫȡA�A���A�׷|�O�H\n");
      				printf("A�B�z�I���Ӧ������B�ͯu�n�I�H��@�w�n�n�n�O���p���C\n");
      				printf("B�B�Z�հݥL�G�A�O���O���ֳz�F�H\n");
      				printf("C�B�Pı���I�Q���A�j�a���B�ͷF���n�d���šA�A�O�ݧڽa�O�a�H\n");
      				printf("D�B�d���n�L�O���F���򨣤��o�H���ķ�A�٬O�O���Z���������C\n");
      			printf("���(�Ha,b,c,d�@��): ");
      			scanf(" %c",&s);                                 
      			printf("\n");
          
      		switch(s)
      		{
        		case 'a':
          			return '5';
          		break;
        		case 'b':
          			return '6';
          		break;
        		case 'c':	
				return '5';
          		break;
        		case 'd':
          			return '6';
          		break;
      		}
      		break;
        
    			case '4':
      				printf("4�B�M�Y�Ӻ��ͬ۽ͬ��w�A�M�w���X�Ө��������ѡA�����F�O�I�_���A�٬O���b���@���Ҩ�������w���A�o�ɧA�|�G\n");
      				printf("A�B�����įP�A��M�n��������Ǯɭu���I\n");
      				printf("B�B�ȹ��䤣��A���٬O������w�a�I���ۦn�F�C\n");
      				printf("C�B���Ȥ@�U�A�u�ȸU�@�A�p�G���O���s���H�٬O�b���������f��A�M�w�n���n�{���C\n");
      				printf("D�B�S����n�������ê��A��Ǯɨ�N�Ǯɨ�a�I\n");
      			printf("���(�Ha,b,c,d�@��): ");
      			scanf(" %c",&s);                                 
      			printf("\n");
          
      		switch(s)
      		{
        		case 'a':
          			return '5';
          		break;
        		case 'b':
          			return '5';
          		break;
        		case 'c':
          			return '6';
          		break;
        		case 'd':
          			return '3';
          		break;
      		}
      		break;

    			case '5':
      				printf("5�B���Ѻ��@�ت��H�W�h�A��m�u�ѤU�ù����V�~�䪺���@�ӡA�ө���H��ù��ت����e�@���L��A�o�ɧA�|��ܡG\n");
      				printf("A�B�H�K�աI���o��������n�I\n");
      				printf("B�B�����ꪺ��m�֭n���I���a�աI\n");
      				printf("C�B�J�M�i�ӤF�A��b���n�N�仡���n�A�ԭ@�@�Ӥp�ɦn�F�C\n");
      				printf("D�B�o�Ӧ�m�����ڡI�ϥ��ڤS���ȤH�ݡA�����ئ��������Y�H\n");
      			printf("���(�Ha,b,c,d�@��): ");
      			scanf(" %c",&s);                                 
      			printf("\n");
           
      		switch(s)
      		{
        		case 'a':
          			return '6';
          		break;
        		case 'b':
          			return '7';
          		break;
        		case 'c':
          			return '7';
          		break;
        		case 'd':
          			return '8';
          		break;
      		}
      		break;
      
    			case '6':
      				printf("6�B�M���ئ��I���w���H�X�h�ܩ@�ءA��ԲD�n�y�H�A��^���n�A�I��ɡA�������A�׫o�Q���c�H�A�o�ɧA�|�G\n");
      				printf("A�B�߷Q�G�o�a�����A�ȺA�ׯu�t�A�U�������ڤ]���ӤF�I\n");
      				printf("B�B�d����I�A�׳o��t�A�ڤ]���|���A�n�y��ݪ��I\n");
      				printf("C�B�b���w���H���e�٬O�O�����קa�A�U���A���ڸI��A�N���D���ݤF�I\n");
      				printf("D�B�N�N�a���G�A���A�ȺA�פ@�V���o��n�ܡH\n");
      			printf("���(�Ha,b,c,d�@��): ");
      			scanf(" %c",&s);                                 
      			printf("\n");
             
      		switch(s)
      		{
        		case 'a':
          			return '7';
          		break;
        		case 'b':
          			return '7';
          		break;
        		case 'c':
          			return '8';
          		break;
        		case 'd':
          			return '8';
          		break;
      		}
      		break;
      
    			case '7':
      				printf("7�B���F�ݤ��P�A�A�R�F�@�O�����ƪ��滷��A�����ۡA���p�����O�H�a�h�F�A�A�|�Ʊ�Ө쪺�a��O�G\n");
      				printf("A�B�o�٥λ��A��M�O�����k�~�����D�ǡC\n");
      				printf("B�B�׫ǡI�ݬݦ��S���E���e���i�H�Y��C\n");
      				printf("C�B�ڿ��F�ڿ��F�I���I��}�~��I\n");
      				printf("D�B�Y��Y��O�H�a�]�����A�����N�ݨ��ù�I\n");
   			printf("���(�Ha,b,c,d�@��): ");
      			scanf(" %c",&s);                                 
      			printf("\n");
              
      		switch(s)
      		{
        		case 'a':
          			return '8';
          		break;
        		case 'b':
          			return '8';
          		break;
        		case 'c':
          			return 'F';
          		break;
        		case 'd':
          			return 'D';
          		break;
      		}
      		break;
        
    			case '8':
      				printf("8�B�hShopping�ɡA�]���H�Ӧh�F�A����ɤp�j���Ȧh��F�A���A�Ʀܳs�A�R���F��]���K�u�ɯšv�F�A�o�ɧA�|�G\n");
      				printf("A�B�u�ɯšv���F�褣���o�ŦX�ڪ��ݭn�A�F���M�٬O�n���^�Ӥ���n�C\n");
      				printf("B�B������F�O�o������A�i�ڤf�U���F����٦��٦^�h���D�z�A�s�o�ۧ@�ۨ��a�C\n");
      				printf("C�B�F���M�ۤv�L���h�ڡA�ள�N���A�N��@���ѬOlucky day�A�q�q���U�ӧa�I\n");
      				printf("D�B���i�H�����H�a�O�H��F���٦^�h�A���K��o�n�q�ܦn�F�I\n");
      			printf("���(�Ha,b,c,d�@��): ");
      			scanf(" %c",&s);                                 
      			printf("\n");
              
		switch(s)
      		{
        		case 'a':
          			return 'E';
          		break;
        		case 'b':
          			return 'B';
          		break;
        		case 'c':
          			return 'A';
          		break;
        		case 'd':
          			return 'C';
          		break;
      		}
      		break;
        
    case 'A':
      printf("�A�O A ���]���}����ǧJ\n");
      printf("�A�߬��⻶�A���������藍�|�æb�߲z�A�����n�@�w�n�o�n�X�ӡA�A���y�k�ʬO�u���������v�A���M���ɭԤ]�|�A�I�p���I�A���j�h�ɭԪ��A�`�O�i�H���H�Pı��A���������ʮ�C\n");
      return '0';          /*�^��'0'�A�����{��*/                                                                                                  
      break;
        
    case 'B':
      printf("�A�O B ���]������\n");
      printf("�S���I�A�N�O�f�u���ꪺ�a�F�l�I�γ\�A�]���g�۫H�L�H�ʥ����A���O�ݦh�F�H���୮�����@����A�A���F��Ӭ۫H�H�ʥ��c���~�A�Ʀ��ٱ`�`���v�O�H���a�ơA�ɹɹ�...�G�M�ܦ���c�]����O�ڡI\n");
      return '0';
      break;
        
    case 'C':
      printf("�A�O C ���]�����]�k\n");
      printf("�A���өʴN�O����j�F��ǡA�p�G�o�ӯS��i�H�n�n�o�����ܡA�|�\�A�]�ন���ѨϤ]���@�w�F���L�A�����n�B�J�[�~�A�ҥH�ѬO�R�Φۤv���p�o���@�˧O�H�A�p�߰ڡI�o���]���Q�o���~���@�ѰڡI\n");
      return '0';
      break;
      
    case 'D':
      printf("�A�O D ���]����C\n");
      printf("�A�o�ӤH�E�ݤ��U���G�L�r�L�`�A���`�ݰ_�Ӥ]�@�I�D�����M���ҼˡA���O�u�n���A���a�p�B�뤤�A���n�`�A����A�ܥi��N�ߨ�½�y���{�H�A���W��g�_�ӡA���������t�Ӥj�A���H�ȩȰڡI\n");
      return '0';
      break;
      
    case 'E':
      printf("�A�O E ���]�����ذ�\n");
      printf("��껡�_�ӡA�A�ä����O�u�c�]�v�A�j���u�ٱo�W�O�u���I�a�߲��v�Ӥw�C�]���M�u�����c�]��_�ӡA���ɭԧA��b�ӹL���}�A���M�ѨϤ�_�ӧA�S�����¼�A���W���U���A�A�ܥi��b�O�H�����v���U���a�Ƴ�I\n");
      return '0';
      break;
        
    case 'F':
      printf("�A�O F ���]������ù\n");
      printf("�o�򻡧a�I���A�����}�M���c��@���A���o�K���@�I�A�N���O�u���D�q���j���v�N��F�I�A�ä��|�H�N���D�@��A�j�h�ƮɭԧA�u�O���B�ͥS�̥X�Y�Ӥw�A�ҥH�o�˪��өʭˬO�ܨ���j�a���w����I\n");
      return '0';
      break;
  }        
}
