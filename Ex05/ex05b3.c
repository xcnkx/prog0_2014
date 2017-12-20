#include <stdio.h>

main(){

  double n,sum=0;
  int a;
    
  while(1){
    printf("数字を入力してください　：");
    scanf("%lg",&n);
    
    sum += n;
    printf("合計　%f\n",sum);
    
    a=(int)sum/10;
    
    if(a%10==5) break;
    
  }
  printf("条件成立！\n");
}
    
