/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakubkaczmarski <jakubkaczmarski@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:41 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/16 16:09:00 by jakubkaczma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_digit(int ch){
    if(ch >= '0' && ch <= '9' || ch > 64 && ch < 91 || ch > 96 && ch < 123)
    return 1;
    
    return 0;
}

int main(void)
{            
    char c = '9';         
    
    printf("Digit %d", ft_digit(c) );
}
