/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:48 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/23 16:48:09 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*arr;

	counter = 0;
	arr = malloc(sizeof(char) * n);
	while (counter < n)
	{
		arr[counter] = *(char *)src;
		src++;
		counter++;
	}
	counter = 0;
	while (counter < n)
	{
		*(char *)dest = arr[counter];
		dest++;
		counter++;
	}
	return (dest -= counter);
}
