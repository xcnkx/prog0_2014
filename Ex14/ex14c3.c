#include <stdio.h>
#define MAX 1000

int isprime(int);

main()
{
  int i,c=0;

  for(i=0;i<MAX;i++)
    {
      if(isprime(i)==1)
	{
	  printf("%d\t",i);
	  c++;
	  if(c%10==0) printf("\n");
	}	
      else continue;
    }
  printf("\n");
}

int isprime(int i)
{
  int j,k,yakusuu=0;
  
  for(j=1;j<=i;j++)
    {
      if(i%j==0) yakusuu++;
    }
  if(yakusuu==2) return 1;
  else return 0;
}
