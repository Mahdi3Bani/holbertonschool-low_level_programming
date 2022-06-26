#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of an array
 * @height: height of an array
 * Return: array
 */
int **alloc_grid(int width, int height)
{
int **a;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);
a = (int **) malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
a[i] = (int *) malloc(4 * width);
if (arr[i] == NULL)
{
free(arr);
for (j = 0; j <= i; j++)
free(arr[j]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
a[i][j] = 0;
}
}
return (a);

}
