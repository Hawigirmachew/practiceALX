#include "main.h"
/**
* _memcpy - copies nn bytes of memory from src to dest
* @dest: destination
* @src: source
* @n: takes number of bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
if (n > 0)
{
int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
}
return (dest);
}
