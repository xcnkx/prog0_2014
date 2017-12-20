#include <stdio.h>

double avg(int,double,double);

main()
{
  int n=1;
  double data_n,avg_n_1 = 0;
  printf("データを入力してください！\n");
  
  while(1)
    {

      printf("入力値%d = ",n);
      scanf("%lg",&data_n);

      if(data_n == 0) break;
     
      avg_n_1 = avg(n,data_n,avg_n_1);
	  
      printf("平均値%d　= %.1f\n",n,avg_n_1);
      n++;
    }
}


double avg(int n, double data_n, double avg_n_1)
{
  return (data_n + avg_n_1*(n-1))/n;
}
