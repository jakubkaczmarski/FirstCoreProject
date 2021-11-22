/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:21:51 by jakubkaczmarski   #+#    #+#             */
/*   Updated: 2021/11/22 14:27:16 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"
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
