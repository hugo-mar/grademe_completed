#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *range;
    int size;
    int i;

    if (start > end)
        size = (start - end) + 1;
    else
        size = (end - start) + 1;
    range = malloc(sizeof(int) * size);
    if (!range)
        return (NULL);
    i = 0;
    if (start <= end)
    {
        while (i < size)
        {
            range[i] = start + i;
            i++;
        }
    }
    else
    {
        while (i < size)
        {
            range[i] = start - i;
            i++;
        }
    }

    return (range);
}
