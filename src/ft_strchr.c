#include <stdio.h>
char * ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == '\0')
        {
            break;
        }
        if(c == *s)
        {
            return (char*)s;
        }
        
        s++;
    }
    return 0;
}
int main(void)
{
    char arr [] = "Siemanko";
    char m = 'd';

    ft_strchr(&arr[0],m);
    // printf("res %c", *ft_strchr(&arr[0],m));
}