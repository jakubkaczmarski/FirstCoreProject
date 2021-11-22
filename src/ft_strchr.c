/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:31 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:32 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char * ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == '\0')
        {
            break;
        }
        if(c == *s)
        {
            return (char*)s;
        }
        
        s++;
    }
    return 0;
}
int main(void)
{
    char arr [] = "Siemanko";
    char m = 'd';

    ft_strchr(&arr[0],m);
    // printf("res %c", *ft_strchr(&arr[0],m));
}