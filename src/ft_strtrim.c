/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:02 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 15:34:13 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charfoundinaset(const char *set, char a)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		finish;
	int		i;
	char	*resstr;

	start = 0;
	i = 0;
	while (s1[start] && charfoundinaset(set, s1[start]))
	{
		start++;
	}
	finish = ft_strlen((char *)s1);
	while (s1[finish - 1] && charfoundinaset(set, s1[finish - 1]))
	{
		finish--;
	}
	resstr = malloc(sizeof(char) * (finish - start + 1));
	i = 0;
	while (finish > start)
	{
		resstr[i] = s1[start];
		start++;
		i++;
	}
	return (resstr);
}
