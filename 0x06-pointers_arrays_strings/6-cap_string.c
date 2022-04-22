#include "main.h"
/**
 *
 *
 *
 */
char *cap-string(char *s)
{
	int x, y, tr;

	char notes[]= ",.;(){}!?\nt\" ";

	for (x = , tr = 0; s[x] != '\0'; x++)
	{
		if (s[0] > 96 && s[0] < 123)
			tr = 1;
		for (y = 0; notes[y] != '\0'; y++)
		{
			if (notes[y] == s[x])
				tr = 1;
		}
		if (tr)
		{
			if (s[x] > 96 && s[x] < 123)
			{
				s[x] -= 32;
				tr = 0;
			}
			else if (s[x] > 64 && s[x] < 91)
				tr = 0;
			else if (s[x] > 47 && s[x] < 58)
				tr = 0;
		}

	}
	return (s);
}
