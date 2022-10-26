☰

#include <stdio.h>

int main()
{
  double numberA = 3.6;
  double numberB = 1.8;
  char operation = '+';
  char answer = 0;


  switch(operation)
  {
    case '+':
      printf("= %lf\n", numberA + numberB);
      break;

    case '-':
      printf("= %lf\n", numberA - numberB);
      break;

    case '*':
      printf("= %lf\n", numberA * numberB);
      break;

    case '/':
      if(numberB == 0)
        printf("\n\n\aDivision by zero error!\n");
      else
        printf("= %lf\n", numberA / numberB);
      break;

    case '%':
      if((long)numberB == 0)
        printf("\n\n\aDivision by zero error!\n");
      else
        printf("= %ld\n", (long)numberA % (long)numberB);
      break;

    default:
      printf("\n\n\aIllegal operation!\n");
  }
}
