#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char * str)
{
    int i;
    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }  
}

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0 ;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return s1[i] - s2[i];
}


int main(int arc, char **argv)
{
    int i;
    i = 1;
    char *tmp;
    while(i < arc -1)
    {
        if(ft_strcmp(argv[i],argv[i+1]) > 0 )
            {
                tmp = argv[i];
                argv[i] = argv[i+1];
                argv[i+1] = tmp;
                i = 0;
            }
        i++;
    }
    
    i=1;
    while (i < arc)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
    return 0;
}