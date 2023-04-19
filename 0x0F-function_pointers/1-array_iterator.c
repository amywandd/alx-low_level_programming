#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: array
 * @size: size of an array
 * @action: pointer function
 * Return- (0) success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action == NULL || array == NULL)
return;
else
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
}
