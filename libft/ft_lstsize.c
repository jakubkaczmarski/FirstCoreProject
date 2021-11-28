#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int counter;
    t_list current = lst;
    
    counter = 0;
    while(current->next != '\0')
    {
        counter++;
        current = current->next;
    }
    return counter;
}