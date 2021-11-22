/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:53:11 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/22 15:28:03 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	int	counter;
	int	i;

	counter = size - 1;
	i = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		i++;
		*dest++ = *src++;
	}
	*dest = '\0';
	return (i + size);
}
