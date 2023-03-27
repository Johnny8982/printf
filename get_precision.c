#include "main.h"

/**
* get_precision - Calculates the precis for printings
* @form: Formatted string in which to print the given arguments.
* @i: List of arguments to be in output.
* @list: list of arguments to be used.
* Return: precis.
*/
int get_precision(const char *form, int *i, va_list list)
{
int curr_i = *i + 1;
int precis = -1;

if (form[curr_i] != '.')
return (precis);
precis = 0;

for (curr_i += 1; form[curr_i] != '\0'; curr_i++)
{
if (is_digit(form[curr_i]))
{
precis *= 10;
precis += form[curr_i] - '0';
}
else if (form[curr_i] == '*')
{
curr_i++;
precis = va_arg(list, int);
break;
}
else
break;
}
*i = curr_i - 1;
return (precis);
}
