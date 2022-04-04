#include <stdio.h>

/**
*main - prints the number of arguements
*@argc:number of arguements passed to the function
*@argv:arguement vector of pointer to strings
*Return:always 0 on success
*/

int main(int argc, char *argv[])
{
(void)argv;
argc--;
printf("%d\n", argc);
return (0);
}
