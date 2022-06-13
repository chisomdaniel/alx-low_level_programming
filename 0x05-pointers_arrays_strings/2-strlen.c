/**
 * _strlen - returns the length of a string
 *
 * @s: first variable
 *
 * Return: Always 0 (Success)
 *
 */

int _strlen(char *s)
{
	int i;
	char *a;
	int count = 0;

	a = s;
	for (i = 0; i < 1000; i++)
	{
		if (a[i] == 0)
		{
			break;
		}
		else
		{
			count++;
		}
	}
	return (count);
}
