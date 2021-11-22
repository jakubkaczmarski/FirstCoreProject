/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:53:11 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/18 19:38:31 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
size_t ft_strlcat(char *dest, char *src, size_t size)
{
    int counter = size - 1;
    int i;
    i = 0;
    while(*dest != '\0')
    {
        dest++;
    }
    while(*src != '\0')
    {
        i++;
        *dest++ = *src++;
        
    }
    *dest = '\0';

    return i + size;
}
int main(void)
{
    char a [30] = {"Siemanko"};
    char c [] = {"src"};
    
    printf("%zu", strlcat(&a[0], c, 4));
    printf("%zu", ft_strlcat(&a[0], c, 4));

    printf("%s\n", a);
}