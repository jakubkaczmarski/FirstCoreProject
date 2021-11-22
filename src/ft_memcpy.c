/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:46 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/22 15:11:05 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	int	counter;

	counter = 0;
	while (counter < num)
	{
		*(char *)dest = *(char *)src;
		src++;
		dest++;
		counter++;
	}
	return (dest -= counter);
}
