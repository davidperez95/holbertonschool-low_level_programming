#ifndef _LISTS_H_
#define _LISTS_H_

/* importing */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Types and structures */

/**
 ** struct dlistint_s - doubly linked list
 ** @n: integer
 ** @prev: points to the previous node
 ** @next: points to the next node
 **
 ** Description: doubly linked list node structure
 ** 
 **/
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* macros constant values */

/* prototypes */

size_t print_dlistint(const dlistint_t *h);

/* macro functions */

#endif /* _LISTS_H_ */
