/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:45:16 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:45:26 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_count_small(t_list lst, int i)
{
	int	j;
	int	count_small;

	count_small = 0;
	j = 0;
	while (lst.nbr[i + j] && j < 3)
	{
		if (j % 3 == 0 && lst.nbr[i + j + 1] != '1' && lst.nbr[i + j] != '0')
			count_small++;
		if (j % 3 == 1 && lst.nbr[i + j] != '0')
			count_small++;
		if (j % 3 == 2 && lst.nbr[i + j] != '0')
			count_small += 2;
		j++;
	}
	return (count_small);
}

int	ft_count_total(t_list lst)
{
	int	i;
	int	count_total;
	int	count_small;

	count_total = 0;
	i = 0;
	while (lst.nbr[i])
	{
		count_small = ft_count_small(lst, i);
		count_total += count_small;
		if (count_small > 0 && i > 0)
			count_total++;
		if (!lst.nbr[i + 1] || !lst.nbr[i + 2])
			break ;
		i += 3;
	}
	if (malloc_ind_list(lst, count_total) == 0)
		return (0);
	return (1);
}
