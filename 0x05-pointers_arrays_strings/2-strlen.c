/**
 * _strlen - returns length of string
 * @s: character to count length
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s++)
	{
		count++;
	}
	return (count);
}
