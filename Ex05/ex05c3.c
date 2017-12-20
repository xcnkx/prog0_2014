#include <stdio.h>

main(){
  int m=0,deb,tax=10000;

  while(1){

    if(tax<=0){
      break;
	}

    ++m;
    printf("%dヶ月目\n利子適用後の借金の残額は%d円です\n",m,tax);
    printf("今月の返済金額を入力してください\n");
    scanf("%d",&deb);
    
    if(m==1) {
      tax = tax - deb;
      printf("借金の残額は%d円になりました\n\n",tax);
      tax = tax*1.05;    }
    else if(m!=1){
      
      tax = tax - deb;
      printf("借金の残額は%d円になりました\n\n",tax);
      tax = tax*1.05;
    }
  }
  printf("返済が終了しました\n");
}
    
      
