/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/24 18:05:59 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = 0;
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
