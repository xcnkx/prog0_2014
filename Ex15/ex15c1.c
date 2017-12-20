#include <stdio.h>
#define NUM 200

int isPrime(int);

main()
{
  int data[3];
  int i,j,cnt=0;
  
  for(i=5; i<=NUM; i+=2)
    {
      for(j=0; j<7 ; j+=2)
	{
	  if(isPrime(i+j) == 1)
	    {
	      data[cnt] = i + j;
	      cnt++;
	    }
	      
	  if(cnt == 3)
	    {
	      printf("三つ子素数{   %d,   %d,  %d}\n",data[0],data[1],data[2]);	      
	    }
	} 
      cnt = 0 ;
    }
}

int isPrime(int i)
{
  int j,yakusuu=0;
  for(j=1; j<=i; j++)
    {
      if(i%j == 0) yakusuu++;
      else continue;
    }
  if(yakusuu == 2) return 1;
  else return 0;
}
