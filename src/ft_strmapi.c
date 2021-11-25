/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:22:58 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/24 17:11:19 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		counter;
	size_t		index;
	char	*arr;

	index = 0;
	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	arr = malloc(sizeof(counter * sizeof(char)));
	index = 0;
	while (index < counter)
	{
		arr[index] = f(index, s);
		index++;
	}
	return (arr);
}
