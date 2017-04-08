#include "ps.h"

/*
**  TO DO: replace with libft.a
*/

int     ft_strlen(char *s)
{
    int count = 0;
    while(s[count] != '\0')
        ++count;
    return count;
}

bool    is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *s)
{
    while (*s != '\0')
        ft_putchar(*s++);
}
void    ft_putnbr(int num)
{
    return ;
}
