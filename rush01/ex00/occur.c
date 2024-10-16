/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occur.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <jmaizel@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:36:57 by rboland           #+#    #+#             */
/*   Updated: 2024/09/15 20:23:30 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int	occur_col(int **tab, int col, int nb)
{
	int	i;
	int	occur;

	occur = 0;
	i = 0;
	while (i < 4)
	{
		if (tab[i][col] == nb)
			occur++;
		i++;
	}
	return (occur);
}

int	occur_row(int *tab, int nb)
{
	int	i;
	int	occur;

	occur = 0;
	i = 0;
	while (i < 4)
	{
		if (tab[i] == nb)
			occur++;
		i++;
	}
	return (occur);
}
