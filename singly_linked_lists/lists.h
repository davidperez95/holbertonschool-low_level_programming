#ifndef _LISTS_H_
#define _LISTS_H_

/* importing */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Types and structures */

/**
 ** struct list_s - singly linked list
 ** @str: string - (malloc'ed string)
 ** @len: length of the string
 ** @next: points to the next node
 **
 ** Description: singly linked list node structure
 **/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* macros constant values */


/* prototypes */

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

/* macro functions */

#endif /* _LIST_H_ */
