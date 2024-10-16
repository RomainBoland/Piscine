/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:08:58 by rboland           #+#    #+#             */
/*   Updated: 2024/09/05 09:28:47 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last_print_check(int i, int o, int p)
{
	if (i != 7 || o != 8 || p != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	o;
	int	p;

	i = 0;
	while (i++ <= 7)
	{
		o = i + 1;
		while (o <= 8)
		{
			p = o + 1;
			while (p <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(o + '0');
				ft_putchar(p + '0');
				ft_last_print_check(i, o, p);
				p++;
			}
			o++;
		}
		i++;
	}
}

/*
int	main(void)
{
   ft_print_comb();
   return 0;
}
*/
