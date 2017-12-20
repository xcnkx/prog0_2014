#include <stdio.h>
#include <stdlib.h>

#define NPOINT 1000000

double rand_double(double, double);

/* モンテカルロ法による円と正方形の面積比の計算 */
main() {
  int i;
  double sum=0.0;
  double rx, ry;

  for(i = 0; i < NPOINT; i++) {
    rx = rand_double(-1.0, 1.0);
    ry = rand_double(-1.0, 1.0);
    if (rx*rx + ry*ry <= 1.0) {
      sum += 1.0;
    }
  }

  printf("Result %e\n", 4.0*sum/NPOINT);
}

double rand_double(double min,double max)
{
  return ((rand()%((int)((max-min)*1000))+1)+min*1000)/1000;
}
