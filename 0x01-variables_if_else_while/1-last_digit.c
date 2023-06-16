#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
  char* condition;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  int lastDigit = n % 10;
	if (lastDigit > 5)
    condition = "and is greater than 5";
  else if (lastDigit == 0)
    condition = "and is 0";
  else if (lastDigit < 6 && lastDigit != 0)
    condition = "and is less than 6 and not 0";

  printf("Last digit of %d is %d %s", n, lastDigit, condition);
	return (0);
}