#include "main.h"
/**
 *_length - returns length
 *@s: a string to print
 *@n: index
 *Return: length of string
 */
int _length(char *s, int n)
{
if (*s == '\0')
return (n);
n++;
return (_length(s + 1, n));
}
/**
* _strlen_recursion - returns length of string
*@s: a string to print
*Return: length of string
*/
int _strlen_recursion(char *s)
{
int n = 0;

return (_length(s, n));
}
