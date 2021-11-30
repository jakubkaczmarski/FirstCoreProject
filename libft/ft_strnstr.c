/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:28:14 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/30 15:30:46 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	counter;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (!big || !little[0])
		return ((char *)big);
	counter = 0;
	while (big[counter] && len > counter)
	{
		j = 0;
		while (big[counter + j] && little[j] && big[counter + j] == little[j]
			&& counter + j < len)
			j++;
		if (!little[j])
			return ((char *)big + counter);
		counter++;
	}
	return (NULL);
}
