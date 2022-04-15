able File  10 lines (7 sloc)  255 Bytes
   
#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
