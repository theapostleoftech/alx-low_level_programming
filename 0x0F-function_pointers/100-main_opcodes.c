#include <stdio.h>
#include <stdlib.h>

/**
  * main - print opcodes
  * @argc:argument 1
  * @argv: argument 2
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	char *op = (char *) main;
	int i, byt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byt; i++)
	{
		printf("%02x", op[i] & 0xFF);
		if (i != byt - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
