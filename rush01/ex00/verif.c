/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <jmaizel@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:28:23 by rboland           #+#    #+#             */
/*   Updated: 2024/09/15 20:24:06 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_functions.h"

int	ft_strlen(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[i] != 32)
			nbr++;
		i++;
	}
	return (nbr);
}

void	ft_print_error(void)
{
	write(2, "Error\n", 5);
}

int	*char_to_int(char *str)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = (int *)malloc(16 * sizeof(int));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (tab);
}

int	str_is_valid(int argc, char *str)
{
	int	i;
	int	*tab;

	i = 0;
	if (argc != 2 || ft_strlen(str) != 16)
		return (0);
	tab = char_to_int(str);
	if (!tab)
		return (0);
	while (tab[i] != '\0')
	{
		if (tab[i] < 1 || tab[i] > 4)
		{
			free(tab);
			return (0);
		}
		i++;
	}
	free(tab);
	return (1);
}
