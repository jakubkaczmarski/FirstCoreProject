/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:28:14 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/27 16:15:09 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size_oflittle;
	size_t	size_ofbig;
	size_t	counter;
	char	*str;
	char	*substr;

	counter = 0;
	size_oflittle = ft_strlen((char *)little);
	size_ofbig = ft_strlen((char *)big);
	str = (char *)big;
	substr = (char *)little;
	if(*little == '\0')
		return (char*)(big);
	if (size_oflittle == 0 || len == 0 || !*big || !*little)
		return (NULL);
	while ((counter + size_oflittle < len)
		&& (size_oflittle + counter <= size_ofbig))
	{
		if (str[counter] == substr[0])
			if (ft_strncmp(str + counter, little, size_oflittle) == 0)
				return (str + counter);
		counter++;
	}
	return (NULL);
}
