#include <stdio.h>
size_t ft_strlen(char *ch){
    size_t counter = 0;
    while(*ch != '\0')
    {
        ch++;
        counter++;
    }
    return counter;
}

int main(void)
{            
    char c [] = "Siemanko";
    
    printf("Alpha %zu", ft_strlen(c));
}
