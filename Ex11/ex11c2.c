#include <stdio.h>

main(){
  
  int InMat[3][4],OutMat[6][2],i,j,m=-1,n;
  
  printf("３行４列の行列を整数値で入力して下さい。\n");
  
  for(i=0;i<3;i++){
      for(j=0;j<4;j++){
	scanf("%d",&InMat[i][j]);
      }
  }
 
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      n = (4*i+j)%2; 
      if(n==0){
	m++;
      }
      OutMat[m][n]=InMat[i][j];
    }
  } 

  printf("６行２列に変換した行列を表示します。\n");
  for(i=0;i<6;i++){
    for(j=0;j<2;j++){
      printf("%3d",OutMat[i][j]);
    }
    printf("\n");
  }
}
