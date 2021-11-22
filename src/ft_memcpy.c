/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:46 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/22 14:28:03 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

// int main(void)
// {
// 	char c [] = "123";
// 	char d [] = "567";
// 	printf("%s", c);
// 	ft_memcpy(&c[0], &d[0], 5);
// 	printf("%s", c);   
// }
int main ()
{
    char dest[4] = "123";
    char src[4]  = "567";;
	int *ptr = 4;
    char *ptr;
    size_t x;
	void	*mem;
    x = 2;
}