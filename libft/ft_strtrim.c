/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:02 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/30 15:32:41 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*populatestr(char *res, char const *s1, int start, int finish)
{
	int	counter;

	if (!res)
		return (NULL);
	counter = 0;
	while (start <= finish)
		res[counter++] = s1[start++];
	res[counter] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	finish;
	size_t	counter;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	if (!*set && !*s1)
		return (ft_strdup(""));
	counter = 0;
	while (ft_strrchr(set, s1[counter]) != NULL)
	{
		counter++;
		if (s1[counter] == '\0')
			return (ft_strdup(""));
	}
	start = counter;
	counter = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, (int)s1[counter]) != NULL)
		counter--;
	finish = counter;
	res = malloc(sizeof(char) * (2 + (finish - start)));
	return (populatestr(res, s1, start, finish));
}
