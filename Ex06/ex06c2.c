#include <stdio.h>

main(){
  
  int i,j,n;
  
  printf("1から9までの整数を入力して下さい：");
  scanf("%d",&n);
  
  if(0<n&&n<10){
    for (i=1;i<n;i++){
      for (j=1;j<=i;j++){
	printf("%d",i);
      }
      printf("\n");
    }
    for(i=n;i>0;i--){
      for (j=1;j<=i;j++){
	printf("%d",i);
      }
      printf("\n");
    }
  }
  else printf("入力する数は1から9までです\n");
}
