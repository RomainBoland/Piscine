/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:34:07 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:34:21 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_print_num(t_list lst, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (lst.index_list[i] == -1)
		{
			ft_putstr("Dict Error\n");
			return ;
		}
		i++;
	}
	i--;
	while (i > 0)
	{
		ft_putstr(lst.word_list[lst.index_list[i]]);
		write(1, " ", 1);
		i--;
	}
	ft_putstr(lst.word_list[lst.index_list[i]]);
	write(1, "\n", 1);
	free_fct_all(lst);
}
