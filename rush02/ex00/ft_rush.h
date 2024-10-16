/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:19:04 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:52:08 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFERSIZE 1024

typedef struct s_list
{
	char	**keys;
	char	**word_list;
	char	*nbr;
	int		*index_list;
	int		count;
}	t_list;

t_list	ft_find_key(t_list lst, int i, int count_total);
t_list	ft_find_large(t_list lst, int i, int count_total);
t_list	ft_first_digit(t_list lst, int i, int j, int count_total);
t_list	ft_second_digit(t_list lst, int i, int j, int count_total);
t_list	ft_third_digit(t_list lst, int i, int j, int count_total);
void	ft_putstr(char *str);
void	ft_print_num(t_list lst, int size);
void	free_fct(t_list lst, int i1, int i2);
void	free_fct_all(t_list lst);
int		ft_get_file_length(char *file);
int		ft_parse_num(t_list lst, char *input_num);
int		ft_parse_dic(char *dict, int words, t_list lst, char *input_num);
int		ft_strcmp(char *s1, char *s2);
int		ft_search(char *nbr, t_list lst);
int		ft_conv(t_list lst);
int		ft_count_small(t_list lst, int i);
int		ft_count_total(t_list lst);
int		ft_malloc_dic(char *dict, char *input_num);
int		ft_read_file(char *dict, char *file, char *input_num);
int		count_words(char *str);
int		malloc_ind_list(t_list lst, int count_total);
int		ft_run_program(char *file, char *input_num);

#endif
