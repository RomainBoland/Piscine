/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:20:59 by rboland           #+#    #+#             */
/*   Updated: 2024/09/12 15:33:57 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("factorielle de 10 : %d\n", ft_iterative_factorial(10));
	printf("factorielle de 0 : %d\n", ft_iterative_factorial(0));
	printf("factorielle d un nombre negatif : %d\n",ft_iterative_factorial(-5));
	printf("factorielle de 3 : %d\n", ft_iterative_factorial(3));
	return 0;
}
*/
