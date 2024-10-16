/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 23:12:10 by rboland           #+#    #+#             */
/*   Updated: 2024/09/08 23:13:21 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush_print(int x, int y);

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(2, "Les valeurs entrees ne sont pas valides\n", 40);
	}
	else
	{
		rush_print(x, y);
	}
}

void	rush_print(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0)
				|| (i == y - 1 && j == x - 1 && x > 1 && y > 1))
				ft_putchar('A');
			else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
				ft_putchar('C');
			else if (i == 0 || j == 0 || i == y - 1 || j == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
