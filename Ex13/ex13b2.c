#include <stdio.h>

double c2f(double);

main(){
  
  int i,j;
  double data[1][2];
  
  printf("摂氏（℃）　　　華氏（°F）\n");
  
  data[0][0] = 0;
  data[0][1] = 0;

  for (i=0;i<20;i++){
    
    data[0][0] += 5;
    data[0][1] = c2f(data[0][0]);

    printf("  %5d          %-.2f\n",(int)data[0][0],data[0][1]);
  }
}

double c2f(double c)
{
  double f;
  f = 9*c/5 + 32 ;
  return f;
}
