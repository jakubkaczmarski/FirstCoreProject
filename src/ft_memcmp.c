/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:08:47 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:28:05 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int memcmp( const void * ptr1, const void *ptr2, size_t num)
{
    int counter;
    counter = 0;
    char *c;
    char *d;

    c = (char*)ptr1;
    d = (char*)ptr2;
    while(counter < num)
    {
        if( *c != *d )
        {
            return (*c - *d);
        }
        c++;
        d++;
        counter++;
    }
    return 0;
}

int main(void)
{
    char arr[]  = "Siemanko";
    char arr1[] = "Siemaneczko";
    printf("%i", memcmp(arr, arr1, 12));
}