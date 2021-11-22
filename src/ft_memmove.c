/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:48 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/22 13:49:14 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
void *memmove(void *dest, const void *src, size_t n)
{
    int arr[n];
    int counter;

    counter = 0;
    while (counter < n)
    {
        arr[counter] = *(char*)src;
    }
}