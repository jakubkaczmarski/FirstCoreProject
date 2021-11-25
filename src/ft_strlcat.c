/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:53:11 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/24 14:44:43 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	counter;
	size_t	src_len;
	size_t	dest_len;

	counter = 0;
	src_len = ft_strlen(src);
	dest_len = 0;
	if (size == 0)
		return (src_len + dest_len);
	while (dest[dest_len] != '\0')
	{
		if (size - 1 == dest_len)
			return (src_len + dest_len + 1);
		dest_len++;
	}
	while ((counter < (size - dest_len - 1)) && src[counter] != '\0')
	{
		dest[dest_len + counter] = src[counter];
		counter++;
	}
	dest[dest_len + counter] = '\0';
	if (size < dest_len)
		return (src_len + size);
	else
		return (dest_len + src_len);
}
