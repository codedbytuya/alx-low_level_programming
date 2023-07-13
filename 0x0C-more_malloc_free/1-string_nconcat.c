#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Adjust n if it is greater or equal to the length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy characters from s1 to concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the first n characters from s2 to concat */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0'; /* Null-terminate the concatenated string */

	return (concat);
}

