/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:40:18 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:40:46 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_conv(t_list lst)
{
	int	count_total;
	int	i;

	count_total = 0;
	i = 0;
	while (lst.nbr[i])
	{
		lst = ft_find_key(lst, i, count_total);
		if (lst.count == -1)
			return (0);
		count_total += lst.count;
		if (!lst.nbr[i + 1] || !lst.nbr[i + 2])
			break ;
		i += 3;
	}
	ft_print_num(lst, count_total);
	return (1);
}
