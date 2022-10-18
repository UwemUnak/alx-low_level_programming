/**
 * main - Entry point
 * Description: prints 'Holberton \n'
 * Results: Always 0 (success)
 * Return: Always 0 (success)
 */
int main(void)
{
@@ -12,6 +12,7 @@ int i = 0;
while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
