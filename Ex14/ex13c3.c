#include <stdio.h>
#define C 10
#define R 50
#define MAX 1000

void isprime(int);

main()
{
  int i=0,j,k;
  int data[MAX];

  while(1)
    { 
      if(i>MAX) break;

      isprime(i);

    }
}

void isprime(int i)
{
  int j,yakusuu = 0;
  
  for(j=1; j<=i; j++)
    {
      if(i%j == 0) yakusuu++;
    }
  if(yakusuu == 2) printf("%d",i);
  
  if(i%10 == 0) printf("\n");
}

  
