#include <stdio.h>

main(){
  int i,k=0,m,n;
  
  printf("nを入力してください：");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    k = k + i*i;
  }
  m = n*(n+1)*(2*n+1)/6;
  printf("１から%dまでの２乗和は%dです\n",n,k);
  printf("公式による結果は%dです\n",m);
}
    
