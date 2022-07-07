#include "3-op_functions.c"
/**
* (*get_op_func) - selects the correct function to perform
* @s: a pointer to the operator
* Return: a pointer to the function required
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

	for (i = 0; i < 6; i++)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
	}
	return (NULL);
}

