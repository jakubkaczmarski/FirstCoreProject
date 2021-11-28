/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:02 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/26 13:53:15 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	finish;
	size_t	counter;
	char	*res;

	counter = 0;
	while (ft_strrchr(set, (int)s1[counter]) != NULL)
	{
		if (s1[counter] == '\0')
		{
			res = malloc(sizeof(char) * 1);
			res[0] = '\0';
			return (res);
		}
		counter++;
	}
	start = counter;
	counter = ft_strlen((char *)s1) - 1;
	while (ft_strrchr(set, (int)s1[counter]) != NULL)
		counter--;
	finish = counter;
	res = malloc(sizeof(char) * (finish - start) + 2);
	if (!res)
		return (NULL);
	counter = 0;
	while (start <= finish)
		res[counter++] = s1[start++];
	res[counter] = '\0';
	return (res);
}
