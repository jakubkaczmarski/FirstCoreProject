/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:22:58 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:12 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char* ft_strmapi(char const* s, char (*f)(unsigned int, char))
{
    int counter;

    int index;

    index = 0;
    counter = 0;
    while(s[counter] !='\0')
    {
        counter++;
    }
    char *arr = malloc(sizeof(counter * sizeof(char)));
    index = 0;
    while(index < counter)
    {
    arr[index] = f(index,s);
    index++;
    }
    return arr;
}
char f(unsigned int a, char c){
    c = '0';
    return c;
}
int main(void)
{
    char arr[] = "Siemanko";
    
    char * r = ft_strmapi(arr, f);
    printf("s%s", r );
}