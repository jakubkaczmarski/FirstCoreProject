#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
t_list *ft_lstnew(void *content)
{
    t_list *s = malloc(sizeof(t_list));
    s->content = content;
    return s;
}

int main(void)
{
    char arr[] = "Siemako";
    t_list arr1 = *ft_lstnew(arr);
    printf("%s", (char*)arr1.content);
}