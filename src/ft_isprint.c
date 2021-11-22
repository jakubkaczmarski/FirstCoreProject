/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:43 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/22 14:28:16 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
