#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: main string to be scanned
 * @needle: This is the small string to be searched with-in haystack string
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
