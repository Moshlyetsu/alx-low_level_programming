#include <stdlib.h>
#include "main.h"

/**
 * *_realloc -> will reallocate a memory block using malloc & free it. 
 * @ptr: the pointer to the memory that was previsouly allocated by malloc.
 * @old_size: the size of the allocated memory of the ptr.
 * @new_size: the new size of the new memory block after reallocation.
 * Return: the pointer of the new allocated memory block.
 */
 
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nw_pntr, *old_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	nw_pntr = malloc(new_size);
	if (!nw_pntr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			nw_pntr[x] = old_ptr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			nw_pntr[x] = old_ptr[x];
	}

	free(ptr);
	return (nw_pntr);
}
