#include <stdio.h>

main(){
  
  int i,j,k,n1=1,n2=1,n,r,r1=1,res;
  
  printf("nとrを入力してください：");
  scanf("%d%d",&n,&r);

  
  for(i=n;i>0;i--){
    n1 *=i;
  }
  for(j=n-r;j>0;j--){
    n2 *=j;
  }
  for(k=r;k>0;k--){
    r1 *=k;
  }
  res = n1/(n2*r1);
  printf("%dC%d = %d\n",n,r,res);
}
  
    
