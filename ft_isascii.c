#include <stdio.h>
int ft_isascii(int ch){
    if(ch >= 0 && ch <= 127)
    return 1;
    
    return 0;
}

int main(void)
{            
    int c = 321;         
    
    printf("Alpha %d", ft_isascii(c) );
}
