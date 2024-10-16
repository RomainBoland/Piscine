/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_dic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:48:22 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:48:30 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_malloc_dic(char *dict, char *input_num)
{
	int		words;
	t_list	lst;

	words = count_words(dict);
	lst.keys = malloc((words + 1) * sizeof(char *));
	lst.word_list = malloc((words + 1) * sizeof(char *));
	if (!lst.keys || !lst.word_list)
		return (0);
	if (ft_parse_dic(dict, words, lst, input_num) == 0)
		return (0);
	return (1);
}
