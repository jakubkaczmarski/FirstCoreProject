/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:28:14 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 13:46:27 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int strncmp(const char* s1, const char* s2, size_t n) {
    int counter;
    counter = 0;
    while (*s1 && *s2 && counter < n) {
        if (*s1 != *s2) {
            return *s1 - *s2;
        }
        counter++;
        s1++;
        s2++;
    }
    return 0;
}

char* ft_strnstr(const char* big, const char* little, size_t len) {
    int i;
    int j;
    int start;
    j = 0;
    char* arr;
    i = 0;
    while (big[i] != '\0') {
        j = 0;
        if (little[j] == big[i]) {
            start = i;
            while (little[j] == big[i]) {
                i++;
                j++;
                if (little[j] == '\0') {
                    arr = &big[start];
                    return arr;
                }
            }
        }
        i++;
    }
    return NULL;
}
int main(void) {
    char arr[] = "Siemanko";
    char arr1[] = "ank";
    ft_strnstr(arr, arr1, 5);
}