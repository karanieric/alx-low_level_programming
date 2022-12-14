#include <stdio.h>
/**
 * main- main block
 * main-print alphabets in lowercase
 * main-followed by new line
 * main-print all letters except q and e
 * return 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != 'e' && alpha != 'q')
	putchar(alpha);
	}

	return (0);
}
