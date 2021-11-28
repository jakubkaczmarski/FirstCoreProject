/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:55:57 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/25 14:53:11 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;
	unsigned char	*thingy;

	counter = 0;
	thingy = (unsigned char *)s;
	while (counter < n)
	{
		if (*thingy == (unsigned char)c)
			return (thingy);
		thingy++;
		counter++;
	}
	return (0);
}
