#include <stdio.h>

main(){
  int d,m,a=1,sum;
  int b=0;
  
  printf("月と日を空白で区切って入力してください　：");
  scanf("%d%d",&m,&d);
  
  while(a<m){
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
      b+=31;}
      else if(a==4||a==6||a==9||a==11){
	b+=30;}
      else if(a==2){
	b+=28;}
	a+=1;
  }
  sum = (d+b)%7;
  printf("2014年%d月%d日は",m,d);

  switch(sum){
  case 1:
    printf("水曜日です。");
    break;
  case 2:
    printf("木曜日です。");
    break;
  case 3:
    printf("金曜日です。");
    break;
  case 4:
    printf("土曜日です。");
    break;
  case 5:
    printf("日曜日です。");
    break;
  case 6:
    printf("月曜日です。");
    break;
  case 0:
    printf("火曜日です。");
    break;
  }
  printf("\n");
}

      
    
    
    
