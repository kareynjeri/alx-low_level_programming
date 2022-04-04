#include <stdio.h>

/**
*main - prints the name of program
*@argc:number of arguements passed to the function
*@argv:arguement vector of pointer to strings
*return:always 0 on success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
