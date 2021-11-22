#include <stdio.h>
int ft_atoi(const char *str)
{
    int negative;
    negative = 1;
    int num;
    num = 0;
    while(*str == ' ' || *str == '\t')
    {
        str++;
    }
    while(*str == '+' || *str == '-')
    {
        if(*str == '-')
        {
            negative *= -1;
        }
        str++;
    }
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            num += *str - '0';
            num *= 10;
        }else{
            num /= 10;
            break;
        }
        str++;
    }
    return num * negative;
}

int main(void)
{
    printf("%i", ft_atoi("m"));
}