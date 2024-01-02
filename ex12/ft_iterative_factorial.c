#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int result;
    result = 1;
    i = 1;
    if (nb <= 0)
        return 0;
    while (i <= nb)
        {
            result *= i;
            i++; 
        }
    return result;
}

int main(void)
{
    printf("%d\n", ft_iterative_factorial(10));
    return 0;
}