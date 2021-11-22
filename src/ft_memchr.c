/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:55:57 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 15:09:34 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		counter;
	char	*thingy;

	counter = 0;
	thingy = (char *)s;
	while (counter < n)
	{
		if (*thingy == c)
			return (thingy);
		thingy++;
		counter++;
	}
	return (0);
}
