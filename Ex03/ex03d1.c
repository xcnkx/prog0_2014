#include <stdio.h>

main(){
  
  int m,n,rest;
  
  printf("整数m、nを入力してください：");
  scanf("%d%d",&m,&n);
  
  rest = m-m/n*n;
  
  printf(" %d を %d でわった余りは %d です。\n",m,n,rest);
}
