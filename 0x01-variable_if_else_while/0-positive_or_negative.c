#include<stdlib.h>
#include<time.h>
#include<sdtio.h>
/**
*main: Entry of the program
*declaration of variable
*
*Return
*/
int main(void)
{
int n;
strand(time(0));
n = rand() - RAND_MAX / 2;
if (n==0)
printf("Is zero");
else if (n > 0)
printf("%d is positive",n);
else
printf("%d is negative",n);
return 0;
}
