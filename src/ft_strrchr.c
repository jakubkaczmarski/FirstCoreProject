/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:27:04 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:05 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char* ft_strchr(const char* s, int c) {
    char* ret = 0;
    while (*s) {
        if (*s == '\0') {
            break;
        }
        if (c == *s) {
            ret = (char*)s;
        }

        s++;
    }
    return ret;
    ;
}
int main(void) {
    char arr[] = "Siaemankoa";
    char m = 'o';

    ft_strchr(&arr[0], m);
    printf("res %c", *ft_strchr(&arr[0], m));
}