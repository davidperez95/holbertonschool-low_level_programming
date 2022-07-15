#ifndef _MAIN_H_
#define _MAIN_H_

/* importing */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* types and structures */

/**
 ** struct op - Struct op
 **
 ** @op: The operator
 ** @f: The function associated
 **/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* macros valores constantes */

/* prototypes */ 

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/* macros functions */

#endif /* _MAIN_H_ */
