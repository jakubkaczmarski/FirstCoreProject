/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:55:57 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/17 15:39:18 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void * ft_memchr(const void* s, int c, size_t n) {
    int counter;
    char* thingy;

    counter = 0;
    thingy = (char*)s;
    while (counter < n) 
    {
        if (*thingy == c)
            return  (thingy);
        thingy++;
        counter++;
    }
    return 0;
}

int main(void) {
    char a[] = {"Siemanko"};
    char *b = ft_memchr(a, 'S', 6);
    printf("%c", *b);
}