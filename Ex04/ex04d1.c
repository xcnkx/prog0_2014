#include <stdio.h>

main(){
  int y,a,b;
  
  printf("西暦４桁を入力してください（例：2020）＞");
  scanf("%d",&y);
  
  a=y%12;
  b=y%10;

  printf("十干は");

  switch(b) {
  case 0:
    printf("『庚』");
    break;
  case 1:
    printf("『辛』");
    break;
  case 2:
    printf("『壬』");
    break;
  case 3:
    printf("『葵』");
    break;
  case 4:
    printf("『甲』");
    break;
  case 5:
    printf("『乙』");
    break;
  case 6:
    printf("『丙』");
    break;
  case 7:
    printf("『丁』");
    break;
  case 8:
    printf("『戊』");
    break;
  case 9:
    printf("『己』");
    break;
  } 
 
  printf("\n十二支は");
    switch(a){
    case 0:
      printf("『申』\n");
      break;
      case 1:
      printf("『酉』\n");
      break;
      case 2:
      printf("『戌』\n");
      break;
      case 3:
      printf("『亥』\n");
      break;
      case 4:
      printf("『子』\n");
      break;
      case 5:
      printf("『丑』\n");
      break;
      case 6:
      printf("『寅』\n");
      break;
      case 7:
      printf("『卯』\n");
      break;
      case 8:
      printf("『辰』\n");
      break;
      case 9:
      printf("『巳』\n");
      break;
      case 10:
      printf("『午』\n");
      break;
      case 11:
      printf("『未』\n");
      break;
    }
     
  }
