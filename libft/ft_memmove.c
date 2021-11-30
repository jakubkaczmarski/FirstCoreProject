/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:48 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/30 15:28:14 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr1;

	i = 0;
	ptr = dest;
	ptr1 = src;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		while (0 < n--)
			ptr[n] = ptr1[n];
	}
	else
	{
		while (n > i)
		{
			ptr[i] = ptr1[i];
			i++;
		}
	}
	return (dest);
}
