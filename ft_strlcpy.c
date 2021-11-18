/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:23:37 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/16 21:20:15 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>


size_t ft_strlcpy(char *dest, char *src, size_t size)
{
    int counter = size - 1;
    while (counter > 0) 
    {
        *dest++ = *src++;
        counter--;
    }
    return size;
}
int main(void)
{
    char a [] = {"Siemanko"};
    char c [] = {"src"};
    ft_strlcpy(&a[0], c, 4);
    printf("%s\n", a);
}

