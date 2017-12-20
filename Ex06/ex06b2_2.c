#include <stdio.h>

main(){
  
  int  i,j,n,r,res,count=0;
  int  n_kai=1,r_kai=1;
  
  printf("nとrを入力して下さい");
  scanf("%d%d",&n,&r);
  
  for(i=n;count<r;i--){
    n_kai*=i;
    count++;
  }
  for(j=r;j>0;j--){
    r_kai*=j;
  }
  
  res = n_kai/r_kai;
  
  printf("%dC%d = %d\n",n,r,res);
}
