#include <stdio.h>
/** main entry point
 * Print all numbers to 10 with a line
 * Return 0
 */
int main(void)
{
	int number;
	for (number = 0; number <= 9; number++)
	{
		putchar (number);
	}
	putchar ('\n');
	return 0;
}
