#include <stdio.h>
#define INIT_CREDIT 100000 

int payment(double, int);
int fee(int);

main()
{
 int balance = INIT_CREDIT;
 int activity, activity_yen, payment_yen, fee_yen;
 double rate = 0.0;

 while (1)
 {
     printf("\nBalance: %d yen\n", balance);
     printf("Input payment(+ local currency) or income(- yen) >>");
     scanf("%d",&activity);
     if (activity == 0) break;
     else if (activity < 0)
       {
         activity_yen = activity;
       }
     else 
       {
         printf("Input rate of exchange yen/local >>");
         scanf("%lf", &rate);
         payment_yen = payment(rate, activity);
         fee_yen = fee(payment_yen);
         activity_yen = payment_yen + fee_yen;
         printf("fee: %d yen\n", fee_yen);
       }

     balance = balance - activity_yen;
 }

 printf("\nBalance: %d yen\n", balance);
}

int payment(double rate,int activity)
{
  return rate*activity;
}

int fee(int payment_yen)
{
  if (payment_yen*0.03>10)
    {
      return payment_yen*0.03;
    }
  else return 10;
}
