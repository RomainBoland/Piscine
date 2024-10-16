/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_program.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:51:50 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:51:59 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_run_program(char *file, char *input_num)
{
	int		len;
	char	*dict;

	len = ft_get_file_length(file);
	if (len == -1)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	dict = malloc(sizeof(char) * (len + 1));
	if (!dict)
		return (0);
	dict[len] = 0;
	if (ft_read_file(dict, file, input_num) == 0)
		return (0);
	return (1);
}
