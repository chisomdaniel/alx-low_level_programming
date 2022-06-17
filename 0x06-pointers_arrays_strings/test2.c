#include <stdio.h>

int main()
{
	char a = 'f';
	char b;
	char i = ';';

	b = a + 5;

	printf("%c\n", b);

	if (i == ' ' || ',' || '.' || ';')
		printf("YES!\n");

	return (0);
}
