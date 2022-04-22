#include "main.h"
/**
 * leet - an encoder
 * @s: pointer points to array of char
 * Return: char
 */
char *leet(char *s)
{
int a, b;

char lower[] = "aeotl";
char upper[] = "AEOTL";
char numbers[] = "43071";

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; lower[b] != '\0' && upper[b] != '\0')
{
if (s[a] == lower[b] || s[a] == upper[b])
{
s[a] = numbers[b];
break;
}
}
}
return (s);
}
