/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:28:13 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:28:14 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_itoa(int n)
{
  
    char res;
    int counter;
    int negative;

    negative = 0;
    counter = 0;
    
    int  num = n;
    if(n < 0)
    {
        negative = 1;
        n *= -1;
        counter++;
    }
    while(num != 0)
    {
        counter++;
        num = num / 10;
    }

    char *arr = malloc(sizeof(char) * counter);
    if(negative == 1)
    {
        arr[0] = '-';
    }
    counter--;
    
    while (n != 0)
    {
        arr[counter] = n % 10 + '0';
        counter--;
        n /= 10;
    }   
    return arr;
}
int main(void)
{
    int c = 23;
    printf("%s", ft_itoa(-23));
}