/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:22:06 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/30 15:22:15 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *str, char del)
{
	size_t	i;
	size_t	wordcount;

	i = 0;
	wordcount = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == del))
			i++;
		if (str[i] && (str[i] != del))
		{
			wordcount++;
			i++;
		}
		while (str[i] && (str[i] != del))
			i++;
	}
	return (wordcount);
}

static size_t	ft_wl(const char *str, char del)
{
	int	wordcount;

	wordcount = 0;
	while (*str && *str != del)
	{
		wordcount++;
		str++;
	}
	return (wordcount);
}

static char	**ft_checkedge(size_t lenght)
{
	char	**out;

	if (!lenght)
	{
		out = malloc(sizeof(char *) * 1);
		if (!out)
			return (NULL);
		out[0] = NULL;
		return (out);
	}
	out = malloc(sizeof(char *) * (lenght + 1));
	return (out);
}

static size_t	populatearr(char **out, const char *str, char del, size_t *arr)
{
	size_t	i;

	while (*str && arr[0] < arr[1])
	{
		while (*str == del && *str)
			str++;
		out[arr[0]] = malloc(sizeof(char) * ((ft_wl((char *)str, del) + 1)));
		if (!out[arr[0]])
			return (0);
		i = 0;
		while (*str != del && *str)
			out[arr[0]][i++] = *str++;
		out[arr[0]++][i] = '\0';
	}
	return (arr[0]);
}

char	**ft_split(const char *str, char del)
{
	char	**out;
	size_t	arr[2];

	if (!str)
		return (NULL);
	arr[0] = 0;
	arr[1] = ft_wordcount(str, del);
	out = ft_checkedge(arr[1]);
	if (!out)
		return (NULL);
	arr[0] = populatearr(out, str, del, arr);
	out[arr[0]] = NULL;
	return (out);
}
