/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:08 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:09 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int strncmp(const char *s1, const char *s2, size_t n)
{
    int counter;
    counter = 0;
    while(*s1 && *s2 && counter < n)
    {
        if(*s1 != *s2)
        {
            return *s1 - *s2;
        }
        counter++;
        s1++;
        s2++;
    }
    return 0;
}
int main(void)
{
    char a[] = "Scemanko";
    char b[] = "Saemanko";
    printf("%i", strncmp(a , b, 2));
}