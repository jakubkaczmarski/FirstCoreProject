/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:28:10 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:28:11 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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