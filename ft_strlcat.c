/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:53:11 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/17 11:11:53 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t ft_strlcat(char *dest, char *src, size_t size)
{
    int counter = size - 1;
    while(*dest != '\0')
    {
        dest++;
    }
    while(*src != '\0')
    {
        *dest++ = *src++;
        
    }
    *dest = '\0';
    return size;
}
int main(void)
{
    char a [] = {"Siemanko"};
    char c [] = {"src"};
    ft_strlcat(&a[0], c, 4);
    printf("%s\n", a);
}