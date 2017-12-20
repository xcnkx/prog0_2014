#include <stdio.h>

main(){

  int n,sum=0;
  int i;

  printf("整数を入力して下さい：");
  scanf("%d",&n);
  
  for(i=1;i<n;i++){
    if((i % 5) ==0){
      sum += i;
    }
  }
  printf("%d以下の5の倍数となる正の整数の和は%dです\n",n,sum);
}
