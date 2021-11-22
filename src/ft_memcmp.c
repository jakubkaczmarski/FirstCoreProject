/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:08:47 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/17 15:08:48 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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