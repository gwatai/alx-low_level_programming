#include<stdio.h>
/**
 * main - prints size of types on the comp
 * return: 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of char: %lu bytes \n", (unsigned long)sizeof(a));
return (0);
}
