/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:50:53 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:51:03 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_read_file(char *dict, char *file, char *input_num)
{
	int	fd;
	int	offset;
	int	len;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	offset = 0;
	len = 1;
	while (len > 0)
	{
		len = read(fd, dict + offset, BUFFERSIZE);
		offset += len;
	}
	close(fd);
	if (ft_malloc_dic(dict, input_num) == 0)
	{
		free(dict);
		return (0);
	}
	free(dict);
	return (1);
}
