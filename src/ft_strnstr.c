/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:28:14 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 15:31:49 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		start;
	char	*arr;

	j = 0;
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		if (little[j] == big[i])
		{
			start = i;
			while (little[j] == big[i])
			{
				i++;
				j++;
				if (little[j] == '\0')
				{
					arr = &big[start];
					return (arr);
				}
			}
		}
		i++;
	}
	return (NULL);
}
