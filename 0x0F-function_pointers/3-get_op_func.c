#include "calc.h"

/**
 * get_op_func - select function to perform the operation asked by the user
 * @s: operator
 *
 * Return: pointer to the func that corresponds to the op given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < (sizeof(ops) / sizeof(ops[0])))
	{
		if (s == (&ops[i])->op)
			return ((&ops[i])->f);
		i++;
	}
}
