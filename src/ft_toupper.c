#include <stdio.h>
int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        return c - 32;
    }else{
        return c;
    }
}

int main(void)
{
    printf("%c", ft_toupper('C'));
}