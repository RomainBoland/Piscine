# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 11:55:55 by tilogie           #+#    #+#              #
#    Updated: 2024/09/22 14:05:52 by tilogie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	main.c					\
			free_fct_all.c			\
			ft_conv.c				\
			ft_count.c				\
			ft_find_key.c			\
			ft_get_file_length.c	\
			ft_malloc_dic.c			\
			ft_parse_num.c			\
			ft_print_num.c			\
			ft_putstr.c				\
			ft_read_file.c			\
			ft_run_program.c		\
			ft_search.c				\
			ft_split_dict.c			\
			ft_strcmp.c			\
			malloc_ind_list.c

OBJS = ${SRCS:.c=.o}
NAME = rush-02
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
