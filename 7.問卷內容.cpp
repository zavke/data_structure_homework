#include <stdio.h>
#include <stdlib.h>
char ans(char);    /*宣告函數*/ 
int main (void)
{
char n='1';/*宣告*/ 
printf("測試你是哪一種魔鬼\n");
printf("\n");
  
while(n!='0')/*作答，直到顯式結果*/ 
    n=ans(n);  
   
system("pause");      
}

char ans (char a)/*函數,各題題目*/ 
{
char s;/*宣告*/ 
	switch(a)/*題目*/ 
  	{
    			case '1':
      				printf("1、在討論區中，如果有人對你所發表的言論大力吐槽，甚至口出惡言，你的反應會是：\n");
      				printf("A、大家都有言論自由，隨便他！\n");
      				printf("B、心裏超不爽，不過還是得維持風度，留言請他自重好了。\n");
      				printf("C、搞什麼？居然敢罵我，當然一定要罵回去！\n");
      				printf("D、撂兄弟，叫網友在網路上一起圍剿他。\n"); 
      				printf("選擇(以a,b,c,d作答): ");
      			scanf(" %c",&s);/*輸入答案*/           
      			printf("\n");
      
      		switch(s)/*對應之下一題*/ 
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
      				printf("2、在KTV歡唱得正high時，麥克風突然失靈了，聲音忽有忽滅，氣氛馬上冷了下來，這時你會：\n");
      				printf("A、應該是線路有問題，大家趕快動手檢查看看。\n");
      				printf("B、誰？是誰在搞鬼？一定是在場的人故意搗亂！\n");
      				printf("C、馬的！叫服務人員來，我要客訴！\n");
      				printf("D、算了，不唱了，真掃興。\n");  
      			printf("選擇(以a,b,c,d作答): ");
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
      				printf("3、一陣子沒聯絡的朋友最近出手變得很大方，和他出去老是喜歡買單請客，你的態度會是？\n");
      				printf("A、哇！有個有錢的朋友真好！以後一定要好好保持聯絡。\n");
      				printf("B、坦白問他：你是不是中樂透了？\n");
      				printf("C、感覺有點討厭，大家做朋友幹嘛要搞階級，你是看我窮是吧？\n");
      				printf("D、搞不好他是做了什麼見不得人的勾當，還是保持距離比較妥當。\n");
      			printf("選擇(以a,b,c,d作答): ");
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
      				printf("4、和某個網友相談甚歡，決定約出來見見面聊聊天，但為了保險起見，還是約在公共場所見面比較安全，這時你會：\n");
      				printf("A、興高採烈，當然要穿戴整齊準時赴約！\n");
      				printf("B、怕對方找不到，我還是先到約定地點等著好了。\n");
      				printf("C、不怕一萬，只怕萬一，如果對方是恐龍怎辦？還是在旁邊先驗驗貨色再決定要不要現身。\n");
      				printf("D、沒什麼好躲躲藏藏的，能準時到就準時到吧！\n");
      			printf("選擇(以a,b,c,d作答): ");
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
      				printf("5、今天網咖裏的人超多，位置只剩下螢幕面向外邊的那一個，來往行人對螢幕裏的內容一覽無遺，這時你會選擇：\n");
      				printf("A、隨便啦！有得玩比較重要！\n");
      				printf("B、那麼爛的位置誰要坐！換家啦！\n");
      				printf("C、既然進來了，實在不好意思說不要，忍耐一個小時好了。\n");
      				printf("D、這個位置不錯啊！反正我又不怕人看，坐哪裏有什麼關係？\n");
      			printf("選擇(以a,b,c,d作答): ");
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
      				printf("6、和心裏有點喜歡的人出去喝咖啡，氣候涼爽宜人，氣氛正好，點單時，店員的態度卻十分惡劣，這時你會：\n");
      				printf("A、心想：這家店的服務態度真差，下次打死我也不來了！\n");
      				printf("B、搞什麼！態度這麼差，我也不會給你好臉色看的！\n");
      				printf("C、在喜歡的人面前還是保持風度吧，下次再給我碰到你就知道難看了！\n");
      				printf("D、冷冷地說：你的服務態度一向都這麼好嗎？\n");
      			printf("選擇(以a,b,c,d作答): ");
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
      				printf("7、為了看火星，你買了一臺高倍數的望遠鏡，轉著轉著，不小心轉到別人家去了，你會希望照到的地方是：\n");
      				printf("A、這還用說，當然是有美女洗澡的浴室。\n");
      				printf("B、臥室！看看有沒有激情畫面可以欣賞。\n");
      				printf("C、我錯了我錯了！快點轉開才對！\n");
      				printf("D、欣賞欣賞別人家也不錯，轉到哪就看到哪羅！\n");
   			printf("選擇(以a,b,c,d作答): ");
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
      				printf("8、去Shopping時，因為人太多了，找錢時小姐不僅多找了你錢，甚至連你買的東西也順便「升級」了，這時你會：\n");
      				printf("A、「升級」的東西不見得符合我的需要，東西當然還是要換回來比較好。\n");
      				printf("B、錢找錯了是她的不對，進我口袋的東西哪還有還回去的道理，叫她自作自受吧。\n");
      				printf("C、幹嘛和自己過不去啊，能拿就拿，就當作今天是lucky day，通通收下來吧！\n");
      				printf("D、怎麼可以為難人家呢？把東西還回去，順便跟她要電話好了！\n");
      			printf("選擇(以a,b,c,d作答): ");
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
      printf("你是 A 級魔鬼開膛手傑克\n");
      printf("你心狠手辣，不高興絕對不會藏在心理，有不爽一定要發泄出來，你的座右銘是「有仇必報」，雖然有時候也會耍點小陰險，但大多時候的你總是可以讓人感覺到你火辣辣的脾氣。\n");
      return '0';          /*回傳'0'，結束程式*/                                                                                                  
      break;
        
    case 'B':
      printf("你是 B 級魔鬼撒旦\n");
      printf("沒錯！你就是貨真價實的壞胚子！或許你也曾經相信過人性本善，但是看多了人性醜陋的那一面後，你除了轉而相信人性本惡之外，甚至還常常慫恿別人做壞事，嘖嘖嘖...果然很有當惡魔的潛力啊！\n");
      return '0';
      break;
        
    case 'C':
      printf("你是 C 級魔鬼綠魔女\n");
      printf("你的個性就是那麼古靈精怪，如果這個特質可以好好發揮的話，會許你也能成為天使也不一定；不過你偏偏要步入歧途，所以老是愛用自己的小聰明作弄別人，小心啊！聰明也有被聰明誤的一天啊！\n");
      return '0';
      break;
      
    case 'D':
      printf("你是 D 級魔鬼濕婆\n");
      printf("你這個人乍看之下似乎無毒無害，平常看起來也一付道貌岸然的模樣，但是只要踩到你的地雷、刺中你的要害，那麼你很可能就立刻翻臉不認人，馬上抓狂起來，情緒的落差太大，讓人怕怕啊！\n");
      return '0';
      break;
      
    case 'E':
      printf("你是 E 級魔鬼阿裏曼\n");
      printf("其實說起來，你並不能算是「惡魔」，大概只稱得上是「有點壞心眼」而已。因為和真正的惡魔比起來，有時候你實在太過善良，但和天使比起來你又不夠純潔，不上不下的你，很可能在別人的慫恿之下做壞事喔！\n");
      return '0';
      break;
        
    case 'F':
      printf("你是 F 級魔鬼阿修羅\n");
      printf("這麼說吧！其實你集善良和邪惡於一身，說得貼切一點，就像是「重道義的大哥」就對了！你並不會隨意為非作歹，大多數時候你只是為朋友兄弟出頭而已，所以這樣的個性倒是很受到大家的歡迎哩！\n");
      return '0';
      break;
  }        
}
