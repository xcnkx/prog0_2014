#include <stdio.h>

main(){
  int n,i,res=50000;
  
  printf("整数を入力しください：");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    res = (res*0.16)+res;
      }
  
  printf("%d週間後の借金は%d円です\n",n,res);
}
