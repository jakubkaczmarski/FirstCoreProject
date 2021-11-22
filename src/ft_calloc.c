/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:28:26 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 15:01:13 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		counter;
	void	*res;

	counter = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	res = malloc(nmemb * size);
	ft_bzero(res, nmemb * size);
	return (res);
}
