#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: nbr of arguments
 * @argv: a pointer of pointers to arguments
 * Return: 0(Success),1(wrong nbr of arguments),2(nbr of bytes < 0)
 */
int main(int argc, char **argv)
{
	int nbr_of_bytes, i;
	char *buffer;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbr_of_bytes = atoi(argv[1]);
	if (nbr_of_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	buffer = (char *)main;
	for (i = 0; i < nbr_of_bytes - 1; i++)
	{
		printf("%02hhx ", buffer[i]);
	}
	printf("%02hhx\n", buffer[i]);
	return (0);
}
