#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * get_op_func - function that selects operation
  * @s:- operations to be checked
  * Return:- Always 0 (success)
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int m;

	m = 0;

	while (m < 5)
	{
		if (ops[m].op[0] == s[0])
			return (ops[m].f);

		m++;
	}
	return (NULL);
}
