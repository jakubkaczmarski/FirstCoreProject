/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/29 15:53:54 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c < 0 || c > 255)
		return ((char *)s);
	if ((unsigned char)*s == '\0' && (unsigned char)c == '\0')
		return ((char *)s);
	else if ((unsigned char)c == '\0')
	{
		while ((unsigned char)*s != '\0')
			s++;
		return ((char *)s);
	}
	while ((unsigned char)*s)
	{
		if ((unsigned char)*s == '\0')
			break ;
		if ((unsigned char)c == (unsigned char)*s)
			return ((char *)s);
		s++;
	}
	return (0);
}
