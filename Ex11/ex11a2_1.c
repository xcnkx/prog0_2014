#include <stdio.h>
#define ROW 2
#define COLUMN 3

main()
{
  int matrix_1[ROW][COLUMN],matrix_2[ROW][COLUMN],matrix_3[ROW][COLUMN],i,j; 
  
  printf("Input %d x %d matrix as matrix_1:\n", ROW, COLUMN);
  for(i=0;i<ROW;i++){
    for(j=0;j<COLUMN;j++){
      scanf("%d", &matrix_1[i][j]);
    }
  }
      
  printf("Input %d x %d matrix as matrix_2:\n", ROW, COLUMN);
  for(i=0;i<ROW;i++){
    for(j=0;j<COLUMN;j++){
      scanf("%d", &matrix_2[i][j]);
    }
  }
  
  for(i=0;i<ROW;i++){
    for(j=0;j<COLUMN;j++){
      
      matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j];
    }
  }
  
  printf("Result of matrix_1 + matrix_2:\n");
  for(i=0;i<ROW;i++){
    for(j=0;j<COLUMN;j++){
      printf("%2d ", matrix_3[i][j]);
    }
    printf("\n");
 }
}
