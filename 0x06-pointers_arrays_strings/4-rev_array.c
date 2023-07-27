#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
*
* @a: is a pointer to array of integers
* @s2: number of elements of the array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int tmp, i;
									  /*      0 1 2 3 4 */
	for (i = 0; i < n / 2; i++) /* *a = {1,2,3,4,5}; && n = 5 */
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 -i] = tmp;

	}
}
