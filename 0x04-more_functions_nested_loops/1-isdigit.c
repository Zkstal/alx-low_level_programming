#include "main.h"

/**
 * _isdigit - check if number is 0 9
 * @c: number to check
 */

int _isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
