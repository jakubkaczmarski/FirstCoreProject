/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:50 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/18 11:14:00 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *ptr, int value, size_t num)
{
    int counter;

    counter = 0;
    while(counter < num)
    {
        *(char*)ptr = value;
        counter++;
        ptr++;
    }
    return  ptr;
}

int main(void)
{            
    char c [] = "Siemanko";
    printf("%s", c);
    ft_memset(&c[0], 'q', 5);
    printf("%s", c);   
}
