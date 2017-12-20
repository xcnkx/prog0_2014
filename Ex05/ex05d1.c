#include <stdio.h>

main(){
  int m,n,res;

    printf("m　nを入力して下さい。：");
    scanf("%d%d",&m,&n);
  
  while(res!=0){

    printf("%d %% %d =",m,n);
    
    res = m % n;
    m = n;
    n = res;
    
    
    printf("%d\n",res);

  }
  printf("最大公約数は%dです。\n",m);
}
