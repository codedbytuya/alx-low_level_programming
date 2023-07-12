#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char **argv)
{
    int mul, a, b;

    /* Check if the correct number of arguments is provided */
    if (argc != 3)
    {
        printf("Error\n");
        return 1; /* Return 1 to indicate an error */
    }

    /* Perform the multiplication of the two command-line arguments */
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    mul = a * b;

    /* Print the result of the multiplication */
    printf("Result: %d\n", mul);

    return 0; /* Return 0 to indicate successful execution */
}
