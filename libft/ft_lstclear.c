/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:19:36 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/30 15:45:11 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if(!*lst)
        return ;
    if((*lst)->next == NULL)
        ft_lstclear(&(*lst)->next, del);
    ft_lstdelone((*lst), del);
    (*lst) = NULL;
}