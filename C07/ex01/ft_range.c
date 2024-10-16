/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:13:40 by rboland           #+#    #+#             */
/*   Updated: 2024/09/17 22:23:41 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	result = (int *)malloc(size * sizeof(int));
	if (!result)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
