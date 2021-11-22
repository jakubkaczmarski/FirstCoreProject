/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:21:51 by jakubkaczmarski   #+#    #+#             */
/*   Updated: 2021/11/22 15:29:43 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *ch)
{
	size_t	counter;

	counter = 0;
	while (*ch != '\0')
	{
		ch++;
		counter++;
	}
	return (counter);
}
