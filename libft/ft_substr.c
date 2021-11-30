/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:26:59 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/29 19:45:12 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	end;
	size_t	counter;
	char	*arr;

	if (ft_strlen((char *)s) < len)
		len = ft_strlen((char *)s);
	end = start + len;
	counter = 0;
	if (start > ft_strlen((char *)s) || start > len)
		return (ft_strdup(""));
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr || !s)
		return (NULL);
	while (start < end)
	{
		arr[counter] = s[start];
		start++;
		counter++;
	}
	arr[counter] = '\0';
	return (arr);
}
