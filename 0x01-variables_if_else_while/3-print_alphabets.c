#include <stdio.h>
/** main Entry point
 * Print lowercase alphabet and uppercase alphabet
 * Returns 0
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    char letter = 'A';
    while (letter <= 'Z');
    {
	    putchar(letter);
	    letter++;
}
    putchar('\n');

    return 0;
}
