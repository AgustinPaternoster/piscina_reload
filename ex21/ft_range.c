#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *p;
    int size;
    int i;
    size = max - min;
    p = malloc(sizeof(int)*size);
    i = 0;
    while (i <= size)
    {
        p[i] = min + i;
        i++;
    }
    return p;
}

// int main(void)
// {
//     int * p;
//     int min = -10;
//     int max = -2;
//     p = ft_range(min,max);
//     for (int i = 0; i < max - min; i++)
//         printf("%d ", p[i]);
//     return 0 ;
// }