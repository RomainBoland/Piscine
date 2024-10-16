/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <jmaizel@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:51:54 by rboland           #+#    #+#             */
/*   Updated: 2024/09/15 20:29:00 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	**malloc_help(int rows, int cols)
{
	int	**tab;
	int	i;

	tab = (int **) malloc(rows * sizeof(int *));
	if (!tab)
	{
		ft_print_error();
		return (0);
	}
	i = 0;
	while (i < rows)
	{
		tab[i] = (int *) malloc(cols * sizeof(int));
		if (!tab[i])
		{
			while (i > 0)
				free(tab[--i]);
			free(tab);
			ft_print_error();
			return (0);
		}
		i++;
	}
	return (tab);
}

void	put_zero(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_tab(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
