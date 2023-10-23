#include <stdio.h>

int main(void) {
  int number, indicator;
  scanf("%d", &number);
  if (number%2 == 0)
    indicator = 1;
  else
    indicator = 0;
  
  switch (indicator)
  {
    case 0 :
      printf("%d is odd", number);
      break;
    case 1 : 
      printf("%d is even", number);
  }
  return 0;
}
