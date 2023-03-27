#include "main.h"

/**
* get_z - Calculates the z to cast the argument.
* @form: formatted string in which to print the given arguments
* @i: List of arguments to be printed.
* Return: Precision.
*/
int get_z(const char *form, int *i)
{
int current_i = *i + 1;
int z = 0;

if (form[current_i] == 'l')
z = S_LONG;
else if (form[current_i] == 'h')
z = S_SHORT;
if (z == 0)
*i = current_i - 1;
else
*i = current_i;
return (z);
}
