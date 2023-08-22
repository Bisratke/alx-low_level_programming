/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
int m;
for (m = 0; s[m] != '\0'; m++)
;
return (m);
}
