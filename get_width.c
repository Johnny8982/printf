#include "main.h"

/**
* get_wid - Calculates the wid for printings
* @form: formted string in which to print the arguments.
* @i: List of arguments to be printed.
* @list: list of arguments.
* Return: wid.
*/
int get_wid(const char *form, int *i, va_list list)
{
int current_i;
int wid = 0;

for (current_i = *i + 1; form[current_i] != '\0'; current_i++)
{
if (is_digit(form[current_i]))
{
wid *= 10;
wid += form[current_i] - '0';
}
else if (form[current_i] == '*')
{
current_i++;
wid = va_arg(list, int);
break;
}
else
break;
}
*i = current_i - 1;
return (wid);
}
