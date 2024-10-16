/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <jmaizel@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:51:27 by rboland           #+#    #+#             */
/*   Updated: 2024/09/15 20:24:19 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int	visible_box_col_up(int **tab, int col)
{
	int	i;
	int	norme;
	int	max_height;

	i = 1;
	norme = 1;
	max_height = tab[0][col];
	while (i < 4)
	{
		if (tab[i][col] > max_height)
		{
			norme++;
			max_height = tab[i][col];
		}
		i++;
	}
	return (norme);
}

int	visible_box_col_down(int **tab, int col, int real_norme)
{
	int	i;
	int	norme ;
	int	max_height;

	norme = 1;
	max_height = tab[3][col];
	if (max_height == 0)
		return (real_norme);
	i = 2;
	while (i >= 0)
	{
		if (tab[i][col] > max_height)
		{
			norme++;
			max_height = tab[i][col];
		}
		i--;
	}
	return (norme);
}

int	visible_box_row_left(int *tab)
{
	int	i;
	int	norme;
	int	max_height;

	i = 1;
	norme = 1;
	max_height = tab[0];
	while (i < 4)
	{
		if (tab[i] > max_height)
		{
			norme++;
			max_height = tab[i];
		}
		i++;
	}
	return (norme);
}

int	visible_box_row_right(int *tab, int real_norme)
{
	int	i;
	int	norme;
	int	max_height;

	norme = 1;
	max_height = tab[3];
	if (max_height == 0)
		return (real_norme);
	i = 2;
	while (i >= 0)
	{
		if (tab[i] > max_height)
		{
			norme++;
			max_height = tab[i];
		}
		i--;
	}
	return (norme);
}
