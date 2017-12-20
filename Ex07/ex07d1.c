#include <stdio.h>

main(){
  int i;
  double F[21];
  double gr;
  
  F[0]=0;
  F[1]=1;
  
  for (i=2;i<21;i++){
    F[i] = F[i-1] + F[i-2];
  }
  for (i=0;i<21;i++){
    printf("Fibonacci[%d] = %g\n",i,F[i]);
  }
  printf("\n");
 
  for (i=1;i<20;i++){
    gr = F[i+1]/F[i];
    printf("Fibonacci[%d}/Fibonacci[%d] = %f\n",i+1,i,gr);
  }
}
  
    
