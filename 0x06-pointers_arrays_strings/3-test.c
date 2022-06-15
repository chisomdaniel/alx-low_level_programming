#include <stdio.h>

int main(void)
{
	char a = 'a';
	int b = 'a';

	printf("a char %c\n", a);
	printf("a char %d\n", a);
	printf("an int %d\n", b);
	printf("an int printed as a char: %c\n", b);
	printf("a char int: %d\n", (int)b);

	return (0);
}
