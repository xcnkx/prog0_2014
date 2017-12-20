#include <stdio.h>

main(){
  int i,n;
  int num = 47;
  int iszero = 0;
  
  for(i=1;i<=10;i++){
    printf("1から9までの数を入力して下さい %d回目：",i);
    scanf("%d",&n);
    
    if(n>=10||n<=0) continue;
    
    num -= n;
    if(num == 0){
      iszero = 1;
      break;
    }
  }
  if(iszero == 1)
    printf("%d回目で当たりました\n",i);
  else
    printf("残念ながら当たりませんでした\n");
}
