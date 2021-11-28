/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:28:13 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/27 20:20:31 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static char *run_edgecase()
{
	char *resarr;
	resarr = malloc(sizeof(char) * 12);
	resarr[0] = '-';
	resarr[1] = '2';
	resarr[2] = '1';
	resarr[3] = '4';
	resarr[4] = '7';
	resarr[5] = '4';
	resarr[6] = '8';
	resarr[7] = '3';
	resarr[8] = '6';
	resarr[9] = '4';
	resarr[10] = '8';
	resarr[11] = '\0';
	return resarr;
}
	
static int getLenght(int checknum)
{
	int len;

	len = 0;
	while(checknum != 0)
	{
		checknum /= 10;
		len++;
	}
	return len;
}
char	*ft_itoa(int n)
{
	char *resarr;
	long len;
	int negative;
	negative = 1;
	if(n == -2147483648)
		return run_edgecase();
	if(n < 0)
	{
		negative = -1;
		n = -n;	
	}
	len = getLenght(n);
	if(negative == -1 || n == 0)
		len++;
	resarr = malloc(sizeof(char) * (len  + 1));
	if (!(resarr))
		return (NULL);
	resarr[len] = '\0';
	if(negative == -1)
		resarr[0] = '-';
	else if(n == 0)
		resarr[0] = '0';
	while(n != 0)
	{
		--len;
		resarr[len] = n % 10 + '0';
		n = n / 10;
	}
	return resarr;
}
