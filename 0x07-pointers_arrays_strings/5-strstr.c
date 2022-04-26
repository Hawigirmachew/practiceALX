#include "main.h"
/**
* _strstr - locate and print the pointer to the first occurence of substring
* @haystack: string to search
* @needle: substring to be searched
* Return: pointer to the index of  substring
*/
char *_strstr(char *haystack, char *needle)
{
int i;

if (*needle == '\0')
return(haystack);
while (*haystack)
{
i = 0;

if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);

}
haystack++;
}
return ('\0');
}

