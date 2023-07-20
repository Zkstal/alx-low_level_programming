#include "main.h"

/**
 * _isupper - upper case letter
 * @c: character to be check
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
