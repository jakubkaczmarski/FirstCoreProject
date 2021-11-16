#include <stdio.h>
int ft_isalpha(char ch){
    if(ch > 64 && ch < 91 || ch > 96 && ch < 123)
    return 1;
    
    return 0;
}

int main(void)
{            
    char c = 'A';         
    
    printf("Alpha %d", ft_isalpha(c) );
}
