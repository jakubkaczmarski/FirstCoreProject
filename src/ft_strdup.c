/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:29 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/23 17:34:35 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*arr;

	len = ft_strlen((char *)s) + 1;
	arr = malloc(len);
	if (arr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(arr, (char *)s, len);
	return (arr);
}
