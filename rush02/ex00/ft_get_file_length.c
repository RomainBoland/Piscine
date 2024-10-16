/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_length.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:49:52 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:50:01 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_get_file_length(char *file)
{
	int		fd;
	int		file_length;
	int		bytes_read;
	char	c;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	file_length = 0;
	bytes_read = 1;
	while (bytes_read)
	{
		bytes_read = read(fd, &c, 1);
		file_length += bytes_read;
	}
	close(fd);
	return (file_length);
}
