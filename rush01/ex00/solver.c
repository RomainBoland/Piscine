/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <jmaizel@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:19:39 by rboland           #+#    #+#             */
/*   Updated: 2024/09/15 20:23:44 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int	get_next_row(int col, int row)
{
	if (col == 3)
		return (row + 1);
	return (row);
}

int	get_next_col(int col)
{
	if (col == 3)
		return (0);
	return (col + 1);
}

int	is_valid_placement(int **tab, int *tab_coord, int num, int *norme)
{
	if (occur_row(tab[tab_coord[1]], num) != 1)
		return (0);
	if (occur_col(tab, tab_coord[0], num) != 1)
		return (0);
	if (visible_box_col_up(tab, tab_coord[0]) > norme[tab_coord[0]])
		return (0);
	if (visible_box_col_down(tab, tab_coord[0], norme[4 + tab_coord[0]])
		!= norme[4 + tab_coord[0]])
		return (0);
	if (visible_box_row_left(tab[tab_coord[1]]) > norme[8 + tab_coord[1]])
		return (0);
	if (visible_box_row_right(tab[tab_coord[1]], norme[12 + tab_coord[1]])
		!= norme[12 + tab_coord[1]])
		return (0);
	return (1);
}

int	dfs(int **tab, int row, int col, int *norme)
{
	int	num;
	int	next_row;
	int	next_col;
	int	tab_coord[2];

	tab_coord[0] = col;
	tab_coord[1] = row;
	next_row = get_next_row(col, row);
	next_col = get_next_col(col);
	if (row == 4)
		return (1);
	num = 1;
	while (num <= 4)
	{
		tab[row][col] = num;
		if (is_valid_placement(tab, tab_coord, num, norme))
			if (dfs(tab, next_row, next_col, norme))
				return (1);
		num++;
	}
	tab[row][col] = 0;
	return (0);
}
