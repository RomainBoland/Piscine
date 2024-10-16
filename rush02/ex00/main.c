/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:18:56 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 12:26:24 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	main(int argc, char **argv)
{
	if (argc == 2 && ft_run_program("numbers.dict", argv[1]) == 1)
		return (0);
	else if (argc == 3 && ft_run_program(argv[1], argv[2]) == 1)
		return (0);
	else
		ft_putstr("Error\n");
	return (0);
}
