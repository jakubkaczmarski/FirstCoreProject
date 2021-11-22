/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:08:54 by jakubkaczma       #+#    #+#             */
/*   Updated: 2021/11/22 13:51:29 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <unistd.h>
#include <stdlib.h>
typedef struct s_list {
    void* content;
    struct s_list* next;
} t_list;
int ft_atoi(const char* str);
void ft_bzero(void* s, size_t n);
void* ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(int ch);
int ft_isalpha(char ch);
int ft_isascii(int ch);
int ft_digit(int ch);
int ft_isprint(int ch);
char* ft_itoa(int n);
t_list* ft_lstnew(void* content);
void* ft_memchr(const void* s, int c, size_t n);
int memcmp(const void* ptr1, const void* ptr2, size_t num);
void* ft_memcpy(void* dest, const void* src, size_t num);
void* memmove(void* dest, const void* src, size_t n);
void* ft_memset(void* ptr, int value, size_t num);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char* s, int fd);
char* ft_itoa(int n);
void ft_putstr_fd(char* s, int fd);
char** ft_split(const char* str, char splittythingy);
char* ft_strchr(const char* s, int c);
char* ft_strdup(const char* s);
void ft_striteri(char* s, void (*f)(unsigned int, char*));
char* ft_strjoin(char const* s1, char const* s2);
size_t ft_strlcat(char* dest, char* src, size_t size);
size_t ft_strlcpy(char* dest, char* src, size_t size);
size_t ft_strlen(char* ch);
char* ft_strmapi(char const* s, char (*f)(unsigned int, char));
int strncmp(const char* s1, const char* s2, size_t n);
char* ft_strnstr(const char* big, const char* little, size_t len);
char* ft_strchr(const char* s, int c);
size_t ft_strlen(char* ch);
char* ft_substr(char const* s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);