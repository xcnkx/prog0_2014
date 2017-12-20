#include <stdio.h>

main(){
  int a,g=0,f=0,p;
  double sum=0,ave;
  
  while(a>=0){
    printf("得点を入力してください：");
    scanf("%d",&a);
    
    if(a<0) break;

    if(a>=50) ++g;
    else if(0<=a && a<50) ++f;
    
    sum+=a;
  }
  p = g+f;
  ave = sum/p;

  printf("受験者数は%d人で、平均点は %f点です\n合格者は%d名、不合格者は%d名です\n",p,ave,g,f);
}
