#include <stdio.h>

/**
*main - Prints numbers between 0 to 9 and letters between a to f.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i;
char j;

for (i = 0; i < 10; i++)
putchar(i + '0');
for (j = 'a'; j <= 'f'; j++)
putchar(j);
putchar('\n');
return (0);
}
