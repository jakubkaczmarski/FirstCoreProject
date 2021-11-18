/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:46 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/17 10:54:14 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void *ft_memcpy(void *dest, const void *src, size_t num)
{
	int counter;

	counter = 0;
	while(counter < num)
	{
		*(char*)dest = *(char*)src;
		src++;
		dest++;
		counter++;
	}
	return dest-=counter;
}

int main(void)
{            
	char c [] = "Siemanko";
	char d [] = "Ducky";
	printf("%s", c);
	ft_memcpy(&c[0], &d[0], 5);
	printf("%s", c);   
}
