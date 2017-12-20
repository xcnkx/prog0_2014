#include <stdio.h>

main(){
  
  int i,j,n,m,count=0;
  
  for (i=1;i<=10;i++){
    printf("%d個目の整数を入力してください：",i);
    scanf("%d",&n);
    if (n<=1){
      printf("入力された整数が０以下なのでスキップします\n");
    }
    else {
      m = 0;
      for (j=1;j<=n;j++){
	if(n%j==0) m++;
      }
      if (m==2){
	printf("%dは素数\n",n);
	count++;
      }
    }
  }
  printf("素数は%d個ありました\n",count);
}
      
