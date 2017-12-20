#include <stdio.h>

int gcd(int,int);

main()
{
  int a,b;
  
  while(1)
    {
      printf("Input two numbers\n");
      scanf("%d%d",&a,&b);
      
      if(a>0 && b>0)
	{
	  printf("GCD of %d and %d is %d\n",a,b,gcd(a,b));
	}
      else
	{
	  printf("Input positive numbers again\n");
	}
      
    }
}

int gcd(int x,int y)
{
  int z;
  while(z!=0)
    {
      if (x >= y)
	{
	  z = x%y;
	  x = y;
	  y = z;
	  return y;
	}
      else
	{
	  z = y%x;
	  y = x;
	  x = z;
	  return x;
	}
    }
}
