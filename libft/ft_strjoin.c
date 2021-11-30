/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:24 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/29 18:39:40 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	populatearr(char *arr, const char *str, int *counter)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		arr[*counter] = str[index];
		*counter = *counter + 1;
		index++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		counter;
	int		index;
	char	*arr;

	if (!s1 || !s2)
		return (NULL);
	counter = 0;
	index = 0;
	while (s1[index++] != '\0')
		counter++;
	index = 0;
	while (s2[index++] != '\0')
		counter++;
	arr = malloc(sizeof(char) * (counter + 1));
	if (!arr)
		return (NULL);
	counter = 0;
	populatearr(arr, s1, &counter);
	populatearr(arr, s2, &counter);
	arr[counter] = '\0';
	return (arr);
}
