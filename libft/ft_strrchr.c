/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/25 16:57:00 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	ret = 0;
	// if(c > 128)
	// {
	// 	return (char*)s;
	// }
	if (*s == '\0' && c == '\0')
	{
		ret = (char *)s;
		return (ret);
	}
	else if (c == '\0')
	{
		while (*s != '\0')
			s++;
		ret = (char *)s;
		return (ret);
	}
	while (*s)
	{
		if (c == *s)
			ret = (char *)s;
		s++;
	}
	if (!ret)
		return (NULL);
	return (ret);
}
