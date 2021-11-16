#include <stdio.h>
int ft_digit(int ch){
    if(ch >= '0' && ch <= '9' || ch > 64 && ch < 91 || ch > 96 && ch < 123)
    return 1;
    
    return 0;
}

int main(void)
{            
    char c = '@';         
    
    printf("Alnum %d", ft_digit(c) );
}
