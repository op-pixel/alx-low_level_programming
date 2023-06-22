#include "3-calc.h"
/**
 * main - calc num1 op num2
 * @argc: nbr of arguments
 * @argv: a pointer to an array of pointer of arguments
 * Return: 0 (Success), 98 (number of arguments is wrong)
 * 99 (wrong operator), 100 (if the user tries to divide (/ or %) by 0)
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
