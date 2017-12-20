#include <stdio.h>
#include <stdio.h>

main(){
  
  int score[40];
  int i,sum=0;
  double avg = 0.0;
  int n_gtavg =0;
  
  srand((unsigned)time(NULL));
  
  for (i=0;i<40;i++){
    score[i] = rand()%(100+1);
    printf ("score[%d]=%d\n",i,score[i]);
  }

  for (i=0;i<40;i++){
    sum+=score[i];
  }
  avg=(double)sum/40;
  
  for (i=0;i<40;i++){
    if (score[i]>=avg){
      n_gtavg++;
	}
  }
  printf("平均点＝%f\n",avg);
  printf("合格者数＝%d\n",n_gtavg);
}
