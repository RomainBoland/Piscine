/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:36:21 by rboland           #+#    #+#             */
/*   Updated: 2024/09/17 18:48:23 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
		return (-1);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	range = (int *)malloc(150 * sizeof(int));
	printf("size du tab %d", ft_ultimate_range(&range, 0, 0));
	free(range);
	return (0);
}
*/
