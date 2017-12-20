#include <stdio.h>
#define R 10
#define C 10

main(){
  int data[R][C],r,c,i,j;
  
  printf("行数と列数を空白で区切って入力してください＝");
  scanf("%d%d",&r,&c);
  
  if(r > 10||c > 10){
    printf("行数と列数のいずれかが配列の大きさを超えています\n");
  }
  else{

    printf("%d行%d列の行列を空白で区切って整数値で入力して下さい\n",r,c);
    for(i=0;i<r;i++){
      for(j=0;j<c;j++){
	scanf("%d",&data[i][j]);
      }
    }
    
    printf("入力行列を表示します。\n");
    for(i=0;i<r;i++){
      for(j=0;j<c;j++){
	printf("%3d",data[i][j]);
      }
      printf("\n");
    }

    printf("転置行列を表示します。\n");    
    for(i=0;i<c;i++){
      for(j=0;j<r;j++){
	printf("%3d",data[j][i]);
      }
      printf("\n");
    }
  }
}
    
	
      
