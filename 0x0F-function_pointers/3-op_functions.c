#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * op_add - function that adds numbers
  * @num1:- single user input
  * @num2:- single user input
  * Return:- Always 0 (success)
  */

int op_add(int num1, int num2)
{
	int sum;

	sum = num1 + num2;
	return (sum);
}

/**
  * op_sub - function that subtracts two numbers
  * @num1:- single user input
  * @num2:- single user input
  * Return:- Always 0 (success)
  */

int op_sub(int num1, int num2)
{
	int sub;

	sub = num1 - num2;
	return (sub);
}

/**
  * op_mul - function that multiplies two numbers
  * @num1:- single user input
  * @num2:- single user input
  * Return:- Always 0 (success)
  *
  */

int op_mul(int num1, int num2)
{
	int mul;

	mul = num1 * num2;
	return (mul);
}

/**
  * op_div - function that divides two numbers
  * @num1:- single user input
  * @num2:- single user input
  * Return:- Always 0 (success)
  *
  */

int op_div(int num1, int num2)
{
	int div;

	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	div = num1 / num2;
	return (div);
}

/**
  * op_mod - function modes two number
  * @num1:- single user input
  * @num2:- single user input
  * Return:- Always 0 (success)
  *
  */

int op_mod(int num1, int num2)
{

	int mod;

	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	mod = num1 % num2;
	return (mod);
}
