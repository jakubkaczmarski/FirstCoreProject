/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:29 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/17 10:58:23 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_bzero(void *s, size_t n){
    int counter = 0;
    if(n > 0)
    {
       while(counter == n)
       {
           *(char*)s = 0;
           counter++;
       }
    }
}

// int main(void)
// {            
//     char c [] = "Siemanko";
//     size_t w = 2;
//     ft_bzero(&c[0], w);
//     printf("%d")
    // if(c[0] == '\0')
    // {
    //         printf("Siemanko %c",c[1]);
    // }
// }
