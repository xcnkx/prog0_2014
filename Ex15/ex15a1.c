#include <stdio.h>

void print_climate(double,double);


main()
{
  int i;
  double max=0,min=0,avg,sum,climate,nennkousa,data[12];
  
  printf("１月～１２月の気温（摂氏）を入力してください。\n");
  for(i=0; i<12; i++)
    {
     
      scanf("%lg",&data[i]);
      
     
      if(i == 0)
	{
	  min = data[i];
	  max = data[i];
	}
      else 
	{
	  if(min >= data[i]) min = data[i];
	  if(max <= data[i]) max = data[i];
	}
      
      sum += data[i];
       
    }
  
  avg = sum / 12;
 
  nennkousa = max - min;

  printf("最高: %g\t最低: %g\n平均:　%g\t年較差: %g\n", max, min, avg, nennkousa);

  print_climate(max,min);
 
}

void print_climate(double max, double min)
{
  if(min >= 18) printf("A\n");
  else if(min >= -3 && min <18) printf("C\n");
  
  else if(min < -3 && max >= 10) printf("D\n");
  else if(max < 10) printf("E\n");
}
  
  
