/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:28:26 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/27 22:48:16 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int    *ptr;

    if (size == 0)
        return (ptr = malloc(nmemb * size));
    if (nmemb == 0)
        return (NULL);
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}
