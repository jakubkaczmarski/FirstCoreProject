/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:53 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/25 15:52:22 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	if(s == NULL)
		return ;
	while (s[counter] != '\0')
	{
		counter++;
	}
	write(fd, s, counter);
	write(fd, "\n", 1);
}
