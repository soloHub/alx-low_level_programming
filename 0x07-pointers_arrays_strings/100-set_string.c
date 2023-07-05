#include "main.h"

/**
 * set_string - sets the value of a pointer @s to @to
 * @s: char pointer to set to
 * @to: char pointer to reference
 */

void set_string(char **s, char *to)
{
	*s = to;
}
