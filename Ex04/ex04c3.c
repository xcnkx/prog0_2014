#include <stdio.h>

main(){
  int score;
  
  printf("点数を入力してください　");
  scanf("%d",&score);
  printf("点数：%d　評価:",score);

  if(score>=90 && score<=100) printf("SA\n");
  else if(score>=80 && score<90) printf("A\n");
  else if(score>=65 && score<80) printf("B\n");
  else if(score>=50 && score<65) printf("C\n");
  else if(score>=35 && score<50) printf("D\n");
  else if(score>=0 && score<35) printf("F\n");
  else printf("入力された値が異常\n");
}
