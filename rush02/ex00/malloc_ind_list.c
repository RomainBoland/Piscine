/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_ind_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:41:18 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 12:52:29 by phiascha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	malloc_ind_list(t_list lst, int count_total)
{
	if (count_total == 0 && lst.nbr[0] != '0')
		return (0);
	if (count_total == 0)
		lst.index_list = malloc(sizeof(int));
	else
		lst.index_list = malloc(sizeof(int) * count_total);
	if (!lst.index_list)
		return (0);
	if (count_total == 0)
	{
		lst.index_list[0] = ft_search("0", lst);
		ft_print_num(lst, 1);
	}
	else if (ft_conv(lst) == 0)
	{
		free(lst.index_list);
		return (0);
	}
	return (1);
}
