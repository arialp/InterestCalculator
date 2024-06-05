#include <stdio.h>

int main(void){
  double principal, rate, interest;
  int days;

  printf("\n%s", "Enter loan principal (-1 to end):");
  scanf("%lf", &principal);

  while((int)principal != -1){
    printf("%s", "Enter interest rate:");
    scanf("%lf", &rate);

    printf("%s", "Enter term of the loan in days:");
    scanf("%d", &days);

    interest = principal * rate * days / 365;
    printf("The interest charge is $%.2lf\n", interest);

    printf("\n%s", "Enter loan principal (-1 to end):");
    scanf("%lf", &principal);
  }

  return 0;
}
