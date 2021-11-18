/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:28:14 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/18 11:10:55 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//TODO
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

char * ft_strnstr(const char *big, const char *little, size_t len)
{
    int counter = 0;
    while (little != '\0')
    {
        counter++;
        little++;
    }
    little -= counter;
    while(*big != '\0')
    {
        if (*big == *little)
        {
            strncmp(big, little,counter );
        }
        big++;
        little++;
        
    }
    int counter = 0;
    // while()
    // wihle(*big != '\0')
    // {
        
    // }
}
int main(void)
{

    char arr[] = "Siemanko";
    char arr1[] = "ank";
    ft_strnstr(arr, arr1, 5);
}