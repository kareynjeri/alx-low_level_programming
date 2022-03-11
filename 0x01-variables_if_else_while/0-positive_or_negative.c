#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
/** this function  assigns a random number to the variable n
*/
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive ", n);
}
else if (n == 0)
{
printf("%d is zero ", n);
}
else if (n < 0)
{
printf("%d is negative ", n);
}
return (0);
}

