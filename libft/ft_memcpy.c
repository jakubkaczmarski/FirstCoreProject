/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:37:55 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/23 15:37:56 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	counter;
	char	*a;
	char	*a1;

	a = (char *)dest;
	a1 = (char *)src;
	counter = 0;
	if (!dest && !src)
		return (NULL);
	while (counter < num)
	{
		a[counter] = a1[counter];
		counter++;
	}
	return (a);
}
