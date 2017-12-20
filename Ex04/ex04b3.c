#include <stdio.h>

main(){
  int num;
  
  printf("整数を入力してください\n");
  scanf("%d",&num);

  if(!(num >= 0 && num<=15)) printf("対応できる範囲を超えています\n");
  else printf("結果は0x%xです\n",num);
}
