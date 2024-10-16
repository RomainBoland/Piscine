/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:54:55 by rboland           #+#    #+#             */
/*   Updated: 2024/09/12 12:08:51 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("factorielle de 10 : %d\n", ft_recursive_factorial(10));
	printf("factorielle de 0 : %d\n", ft_recursive_factorial(0));
	printf("factorielle d un nombre negatif : %d\n",ft_recursive_factorial(-5));
	printf("factorielle de 3 : %d\n", ft_recursive_factorial(3));
	return 0;
}
*/
