#include "main.h"
/**
*
*
*
*
*/
char *_strpbrk(char *s, char *accept)
{
int x = 0, y;

while (s[x] != '\0')
{
for (y = 0; s[y] != '\0'; y++)
{
if (s[x] == accpet[y])
{
s = &s[x];
return (s);
}
}
x++;
}
return (s);
}
