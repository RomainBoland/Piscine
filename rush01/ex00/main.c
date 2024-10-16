/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <jmaizel@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:01:15 by rboland           #+#    #+#             */
/*   Updated: 2024/09/15 20:23:12 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"
#include <stdlib.h>
#include <unistd.h>

void	free_tab(int **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	int	**values;
	int	*norme;

	values = malloc_help(4, 4);
	norme = char_to_int(argv[1]);
	if (!str_is_valid(argc, argv[1]) || !values)
		return (ft_print_error(), 1);
	put_zero(values);
	if (!norme)
		return (free_tab(values, 4), 1);
	if (!dfs(values, 0, 0, norme))
		ft_print_error();
	else
		print_tab(values);
	free(norme);
	free_tab(values, 4);
	return (0);
}
