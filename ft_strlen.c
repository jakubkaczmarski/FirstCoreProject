/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:21:51 by jakubkaczmarski   #+#    #+#             */
/*   Updated: 2021/11/18 16:31:29 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <stdio.h>
size_t ft_strlen(char *ch){
    size_t counter = 0;
    while(*ch != '\0')
    {
        ch++;
        counter++;
    }
    return counter;
}

int main(void)
{            
    char c [] = "Siemanko";

    printf("Alpha %zu", ft_strlen(c));
}
