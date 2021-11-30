/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:56:37 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/30 14:07:04 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return ;
    if(!*lst)
        *lst = new;
    else
    ft_lstlast(*lst)->next = new;
}