#include <stdio.h>
int ft_isprint(int ch){
    if(ch >= ' ' && ch <= 140)
    return 1;
    
    return 0;
}

int main(void)
{            
    int c = ' ';         
    
    printf("Alpha %d", ft_isprint(c) );
}
