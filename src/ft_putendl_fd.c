/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:53 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:54 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
    int counter = 0;
    while(s[counter] != '\0')
    {
        counter++;
    }
    write(fd, s, counter);
    write(fd, "\n", 1);
}

int main(void)
{
    char arr[] = "Siemanko";
    ft_putendl_fd(arr, 1);
}
