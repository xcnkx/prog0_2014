#include <stdio.h>
#define BIN 8

void d2b(int);

main()
{
  int n;
   
  while(1)
    {
      printf("２進数に直したい１０進数の正の整数を入れてください\n負の数の場合は終了です\n");
      scanf("%d", &n);
      
      if(n >= 0)
	{
	  printf("１０進数表示 %d の２進数表示は、\n",n);
	  d2b(n);
	  printf("\nです。\n\n");
	}
      else break;
    }
  
}

void d2b(int n)
{
  int bin[BIN],i;

  for(i=0; i<8; i++)
    {
      bin[BIN-1-i] = n%2;
      n /= 2;
    }
  for(i=0; i<BIN; i++)
    {
      printf("%d",bin[i]);
    }
}
