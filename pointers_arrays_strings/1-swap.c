#include "main.h"
 /**
 * swap_int - Takes a pointer to an int and updates
 *               the value it points to to 98
 * @b - number two
 * @a: Pointer to the integer to update
 * Return: void
 */
void swap_int(int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
