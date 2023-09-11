#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *doge;
int i, j, k;
char *n, *o;

doge = malloc(sizeof(struct dog));
if (doge == NULL)
return (NULL);

for (i = 0; name[i] != '\0'; i++)
;
for (j = 0; owner[j] != '\0'; j++)
;

n = malloc(sizeof(char) * i + 1);
if (n == NULL)
{
free(doge);
return (NULL);
}
o = malloc(sizeof(char) * j + 1);
if (o == NULL)
{
free(n);
free(doge);
return (NULL);
}
k = 0;
while (k <= i)
{
n[k] = name[k];
k++;
}
k = 0;
while (k <= j)
o[k] = owner[k];
k++;
doge->name = n;
doge->age = age;
doge->owner = o;

return (doge);
}
