#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * malloc_checked - Allocates memory in C language.
  * @b: the size to allocate....
  *
  * Return: Nothing, abs.
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
