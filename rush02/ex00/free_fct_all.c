/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_fct_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:29:22 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 13:40:10 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	free_fct_all(t_list lst)
{
	int	i;

	i = 0;
	while (lst.keys[i])
	{
		free(lst.keys[i]);
		i++;
	}
	i = 0;
	while (lst.word_list[i])
	{
		free(lst.word_list[i]);
		i++;
	}
	free(lst.keys);
	free(lst.word_list);
	free(lst.index_list);
	free(lst.nbr);
}

void	free_fct(t_list lst, int i1, int i2)
{
	int	i;

	i = 0;
	while (i <= i1)
	{
		if (i <= i2)
			free(lst.word_list[i]);
		free(lst.keys[i]);
		i++;
	}
	free(lst.keys);
	free(lst.word_list);
}
