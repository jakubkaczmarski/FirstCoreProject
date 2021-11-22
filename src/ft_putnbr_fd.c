/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:38 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 15:18:55 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*arr;
	int		counter;

	arr = ft_itoa(n);
	counter = 0;
	while (arr[counter] != '\0')
	{
		counter++;
	}
	write(fd, arr, counter);
}
