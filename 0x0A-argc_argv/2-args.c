#include <stdio.h>

/**
*main - prints the length of arguements
*@argc:number of arguements passed to the function
*@argv:arguement vector of pointer to strings
*Return:always 0 on success
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
