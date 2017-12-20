#include <stdio.h>

main(){
  
  int i,n,res;
  
  printf("整数を入力して下さい：");
  scanf("%d",&n);

  for(i=1;i<=n;i+=3){

    printf("%d",i);
  }
}
