#include <stdio.h>

main(){
  
  int data[10][10],R,C,i,j;
  
  printf("２次元配列aの行数、列数を入力してください：");
  scanf("%d%d",&R,&C);
  
  printf("配列aの要素値を左から右、上から下の順で入力してください：");
	  
  for(i=0;i<R;i++){
    for(j=0;j<C;j++){

      scanf("%d",&data[i][j]);

    }
  }
  
  printf("配列aの要素値を表示します\n");
  
  for(i=0;i<R;i++){
    for(j=0;j<C;j++){
      
      printf("a[%d][%d]= %d ", i, j, data[i][j]);
      
    }
    printf("\n");
  }
}
