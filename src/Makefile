# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaczmar <jkaczmar@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:53:09 by jkaczmar          #+#    #+#              #
#    Updated: 2021/11/22 14:34:43 by jkaczmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_strtrim.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
FLAGS			= -Wall -Wextra -Werror -I.

FNAME			= libft.a

all:			$(FNAME)

$(FNAME):		$(OBJS)
				ar rcs	$(FNAME) $(OBJS)
clean:
				$(RM)	$(OBJS)

fclean:			clean