/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:24 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:25 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int counter;
    counter = 0;
    int index;
    index = 0;
    while(s1[index] != '\0')
    {
        counter++;
        index++;
    }
    index  = 0;
    while(s2[index] != '\0')
    {
        counter++;
        index++;
    }
    // printf("Counter %i", counter);
    char *arr = malloc(sizeof(char) * counter);
    index = 0;
    counter = 0;
    while (s1[index] != '\0')
    {
        arr[counter] = s1[index];
        counter++;
        index++;
    }
    index = 0;
    while (s2[index] != '\0')
    { 
     
        arr[counter] = s2[index];
        counter++;
        index++;
    }
    arr[counter] = '\0';
    return arr;
    
}
int main(void)
{
    char s[] = "Siema";
    char c[] = "nko";
    char *arr = ft_strjoin(c,s);
    printf("%s", arr);
}