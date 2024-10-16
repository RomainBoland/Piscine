/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:03:36 by rboland           #+#    #+#             */
/*   Updated: 2024/09/15 10:01:12 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("5 puissance 2 = %d\n", ft_iterative_power(5, 2));
	printf("2 puissance 5 = %d\n", ft_iterative_power(2, 5));
	printf("10 puissance 0 = %d\n", ft_iterative_power(10, 0));
	printf("-5 puissance 0 = %d\n", ft_iterative_power(-5, 0));
	return 0;
}
*/
