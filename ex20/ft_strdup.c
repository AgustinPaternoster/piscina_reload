#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str [i])
        i++;
    return i;
}

void ft_strcpy(char *dest , char *src)
{
    int i;
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

char *ft_strdup(char *src)
{
    char *p;
    int size;
    size = ft_strlen(src) + 1;
    p = malloc(sizeof(char) * size);
    if (p == NULL)
        return NULL;
    ft_strcpy(p, src);
    return p;
}
// int main(int argc, char **argv)
// {
//     char *p;
//     p = ft_strdup(argv[1]);
//     printf("%s\n",p);
//     free(p);
//     printf("%s\n",p);
// }