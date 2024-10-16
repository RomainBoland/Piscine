/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:23:18 by rboland           #+#    #+#             */
/*   Updated: 2024/09/12 12:39:40 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	if (power > 0)
		result = ft_recursive_power(nb, power - 1) * nb;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("5 puissance 2 = %d\n", ft_recursive_power(5, 2));
	printf("2 puissance 5 = %d\n", ft_recursive_power(2, 5));

	return 0;
}
*/
