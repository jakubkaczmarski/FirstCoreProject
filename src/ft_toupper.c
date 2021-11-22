/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:26:54 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:26:55 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        return c - 32;
    }else{
        return c;
    }
}

int main(void)
{
    printf("%c", ft_toupper('C'));
}