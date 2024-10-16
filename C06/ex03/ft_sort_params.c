/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 07:56:18 by rboland           #+#    #+#             */
/*   Updated: 2024/09/11 10:28:15 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_sortargv(int argc, char *argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (argv[i] > argv[j])
			{
				temp = &argv[i];
				argv[i] = argv[j];
				argv[j] = *temp;
			}
			j++;
		}
		i++;
	}
}


int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sortargv(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
