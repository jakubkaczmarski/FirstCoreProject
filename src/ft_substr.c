/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:26:59 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 18:55:55 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		end;
	int		counter;
	char	*arr;

	end = start + len;
	counter = 0;
	arr = malloc(sizeof(char) * len);
	if (!arr)
	{
		return (NULL);
	}
	while (start < end)
	{
		arr[counter] = s[start];
		start++;
		counter++;
	}
	arr[counter] = '\0';
	return (arr);
}
