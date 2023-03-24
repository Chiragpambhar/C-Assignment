#include <stdio.h>

int main()
{
  int even = 0;
  int odd = 0;

  for (int a = 1; a <= 10; a++)
  {
    printf("The integer value is: %d\n", a);

    if (a % 2 == 0)
    {
      printf("%d is even number\n", a);
      even++;
    }
    else
    {
      printf("%d is odd number\n", a);
      odd++;
    }
  }

  printf("Even number are there: %d\n", even++);
  printf("Odd number are there: %d\n", odd++);
}
