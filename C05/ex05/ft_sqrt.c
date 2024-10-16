/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:30:34 by rboland           #+#    #+#             */
/*   Updated: 2024/09/17 12:18:23 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	start;
	int	end;

	i = 1;
	start = i;
	end = nb;
	if (nb < 1)
		return (0);
	while (start <= end)
	{
		i = start + (end - start) / 2;
		if (i == nb / i)
		{
			if (i * i == nb)
				return (i);
			else
				return (0);
		}
		else if (i < nb / i)
			start = i + 1;
		else
			end = i - 1;
	}
	return (0);
}
/*
#include <stdio.h>

int	main (void)
{
	printf("%d\n", ft_sqrt(2147483647));
	return (0);
}
*/
