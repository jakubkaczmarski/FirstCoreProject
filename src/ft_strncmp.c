/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:08 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/24 17:02:54 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			counter;
	unsigned char	*magic;
	unsigned char	*helpme;

	counter = 0;
	magic = (unsigned char *)s1;
	helpme = (unsigned char *)s2;
	while ((magic[counter] != '\0' || helpme[counter] != '\0') && counter < n)
	{
		if (magic[counter] != helpme[counter])
		{
			return (magic[counter] - helpme[counter]);
		}
		counter++;
	}
	return (0);
}
