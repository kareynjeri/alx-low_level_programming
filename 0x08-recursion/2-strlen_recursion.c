#include "main.h"
/**
* _strlen_recursion - length of string
*@s: pointer to string
*Return:length of s
*/

int _strlen_recursion(char *s)
{
int len = 0;

if (*s)
{
len++;
len = len + _strlen_recursion(s + 1);
}
return (len);
}
