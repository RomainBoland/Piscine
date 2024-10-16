/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:01:00 by rboland           #+#    #+#             */
/*   Updated: 2024/09/17 11:30:52 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
	{
		if (nb % 2 == 0)
			nb++;
		else
			nb += 2;
	}
	return (nb);
}
