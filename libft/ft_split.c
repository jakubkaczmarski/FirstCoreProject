/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:19:59 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/28 12:38:40 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


static int getnumofwords(char *str, char splittythingy)
{
	int wordcount;
	
	wordcount = 0;
	if(!str || !splittythingy)
		return 0;
	while(*str != '\0')
	{
		while(*str == splittythingy && *str)
			str++;
		if(*str != splittythingy && *str)
			wordcount++;
		while(*str != splittythingy && *str)
			str++;
	}
	return wordcount;
}
// static char*
//Noice :)
static int ft_wordlength(const char *str, char splittythingy)
{
	int	counter;
	
	counter = 0;
	while(*str && *str != splittythingy)
	{
		counter++;
		str++;
	}
	return (counter);
}
// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must be
// ended by a NULL pointer.
	
char	**ft_split(const char *str, char splittythingy)
{
	char	**out;
	int		i;
	int		counter;
	int		wlen;
	counter = 0;
	if(!getnumofwords((char*)str, splittythingy))
	{
		out = malloc(sizeof(char*) * 1);
		if(!out)
			return NULL;
		out[0] = NULL;
		return out;
	}
	wlen = getnumofwords((char*)str, splittythingy);
	out = malloc(sizeof(char*) * (wlen + 1));
	if(!out)
		return NULL;
	while(*str)
	{
		while (*str == splittythingy && *str)
			str++;
		out[counter] = malloc(sizeof(char) * ((ft_wordlength((char*)str, splittythingy) + 1)));
		if(!out[counter])
			return NULL;
		i = 0;
		while(*str != splittythingy && *str)
		{
			out[counter][i] = *str;
			str++;
			i++;
		}
	
		out[counter][i] = '\0';
		counter++;
		if(counter == wlen)
			break;
	}
	out[counter] = NULL;
	return out;
}
