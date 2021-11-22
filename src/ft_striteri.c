/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:51:51 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:27 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int counter;
    counter = 0;
    while(s[counter] != '\0')
    {
        f(counter , &s[counter]);
        counter++;
    }
}
void tozero(unsigned int a, char * d)
{
    *d = 'a';
}
int main(void)
{
    char arr[] = "Siemanko";
        
    ft_striteri(arr,tozero );
    printf("%s", arr);
}