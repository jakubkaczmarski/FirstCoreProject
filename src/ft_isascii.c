/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:38 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/22 14:28:20 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isascii(int ch){
    if(ch >= 0 && ch <= 127)
    return 1;
    
    return 0;
}

int main(void)
{            
    int c = 321;         
    
    printf("Alpha %d", ft_isascii(c) );
}
