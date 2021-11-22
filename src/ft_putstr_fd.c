/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:36 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:37 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putstr_fd(char* s, int fd)
{
    int counter = 0;
    while(s[counter] != '\0')
    {
        counter++;
    }
    write(fd, s, counter);
}

int main(void)
{
    char arr[] = "Siemanko";
    ft_putstr_fd(arr, 1);
}