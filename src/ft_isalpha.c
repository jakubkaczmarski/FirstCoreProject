/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:35 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/22 14:28:22 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isalpha(char ch){
    if(ch > 64 && ch < 91 || ch > 96 && ch < 123)
    return 1;
    
    return 0;
}

int main(void)
{            
    char c = 'A';         
    
    printf("Alpha %d", ft_isalpha(c) );
}
