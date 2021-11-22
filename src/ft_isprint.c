/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakubkaczmarski <jakubkaczmarski@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:43 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/16 16:08:59 by jakubkaczma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isprint(int ch){
    if(ch >= ' ' && ch <= 140)
    return 1;
    
    return 0;
}

int main(void)
{            
    int c = ' ';         
    
    printf("Alpha %d", ft_isprint(c) );
}
