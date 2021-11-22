/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:19:59 by jkaczmar          #+#    #+#             */
/*   Updated: 2021/11/22 14:27:34 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// createCharArrAndPopulateIt
#include <stdio.h>
#include "libft.h"

static  char* getawordfromarr(const char* str,
                      char splittythingy,
                      int* startingpoint) {
    int counter;
    char* arr;

    counter = 0;
    while (str[*startingpoint] == splittythingy) {
        *startingpoint += 1;
    }
    while (str[*startingpoint] != splittythingy) {
        counter++;
        *startingpoint += 1;
    }
    arr = malloc(counter * sizeof(char));
    *startingpoint -= counter;
    counter = 0;
    while (str[*startingpoint] != splittythingy) {
        arr[counter] = str[*startingpoint];
        *startingpoint += 1;
        counter++;
    }
    return (arr);
}

static int getwordcount(const char* str, char splittythingy) {
    int counter;
    int wordcount;

    counter = 0;
    wordcount = 0;
    while (str[counter] == splittythingy) {
        counter++;
    }
    while (str[counter] != '\0') {
        if (str[counter] == splittythingy) {
            while (str[counter] == splittythingy) {
                counter++;
            }
            wordcount++;
        } else
            counter++;
    }
    wordcount++;
    return (wordcount);
}

char** ft_split(const char* str, char splittythingy) {
    int counter;
    int startingpoints;
    int wordcount;
    char** arr;

    startingpoints = 0;
    counter = 0;
    wordcount = getwordcount(str, splittythingy);
    arr = malloc(wordcount * sizeof(char*));
    while (counter < wordcount) {
        arr[counter] = getawordfromarr(str, splittythingy, &startingpoints);
        counter++;
    }
    return (arr);
}
int main(void) {
    char str[] = "  Siem anko";
    char** arr = ft_split(str, ' ');
    printf("%s ", arr[0]);
    printf("%s", arr[1]);
}