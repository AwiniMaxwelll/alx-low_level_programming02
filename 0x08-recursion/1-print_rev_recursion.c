#include "main.h"
/**
 *_print_rev_recursion - prints the reverse of a string.
 *@s: The string to be printed.
 *Reyurn: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
