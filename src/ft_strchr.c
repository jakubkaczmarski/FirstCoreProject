/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/24 15:13:27 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == '\0' && c == '\0')
	{
		return ((char *)s);
	}
	else if (c == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == '\0')
		{
			break ;
		}
		if (c == *s)
		{
			return ((char *)s);
		}
		s++;
	}
	return (0);
}
