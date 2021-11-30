/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:28:26 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/29 15:50:04 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*temp;
	size_t			res;
	size_t			counter;
	unsigned char	*str;

	res = nmemb * size;
	temp = malloc(nmemb * size);
	str = temp;
	counter = 0;
	if (temp == 0)
		return (temp);
	if (temp)
	{
		while (res > 0)
		{
			str[counter] = '\0';
			counter++;
			res--;
		}
	}
	return (temp);
}
