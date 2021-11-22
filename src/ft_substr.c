/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:26:59 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:00 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const* s, unsigned int start, size_t len)
{
    int end = start + len;
    int counter;
    counter = 0;
    char *arr = malloc(sizeof(char) * len);
    if(!arr)
    {
        return NULL;
    }
    while (start < end)
    {
        arr[counter] = s[start];
        start++;
        counter++;
    }
    return arr;
}
int main(void)
{
    char arr[] = "Siemanko";
    char *arr1 = ft_substr(arr, 3, 5);
    printf("%s", arr1);
}