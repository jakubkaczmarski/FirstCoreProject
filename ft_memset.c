#include <stdio.h>
void *ft_memset(void *ptr, int value, size_t num)
{
    int counter;

    counter = 0;
    while(counter < num)
    {
        ptr = &value;
        counter++;
        ptr++;
    }
    return ptr;
}

int main(void)
{            
    char c [] = "Siemanko";
    
    printf("%s", ft_memset(&c[0], 'p', 3));
    
}
