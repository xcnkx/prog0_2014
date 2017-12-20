#include <stdio.h>

main(){
  
  int  i,n;
  
  printf("階乗を計算したい数を入力して下さい:");
  scanf("%d",&n);
  
  if(0<n&&n<13){
    for(i=n-1;i>0;i--){
      n=n*i;
    }
    printf("%d\n",n);
  }
  else printf("計算できません\n");
}
 
  
