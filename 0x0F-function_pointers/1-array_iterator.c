#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: the giving array
 * @size: the array size
 * @action: a pointer to a fuction that should be executed on elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || size == 0 || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
