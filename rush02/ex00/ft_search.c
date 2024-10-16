/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:32:11 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:32:22 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_search(char *nbr, t_list lst)
{
	int	i;

	i = 0;
	while (lst.keys[i])
	{
		if (ft_strcmp(lst.keys[i], nbr) == 0)
			return (i);
		i++;
	}
	return (-1);
}
