/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:08:47 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/24 19:44:05 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*a1;
	unsigned char	*a2;
	int				r;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			if (a1[i] != a2[i])
			{
				r = a1[i] - a2[i];
				return (r);
			}
			i++;
		}
	}
	r = 0;
	return (r);
}
