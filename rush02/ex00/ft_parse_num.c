/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:46:22 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:46:32 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_parse_num(t_list lst, char *input_num)
{
	int	i;
	int	len;

	i = 0;
	while (input_num[i] == 32 || (input_num[i] >= 9 && input_num[i] <= 13))
		i++;
	if (input_num[i] == '+')
		i++;
	len = 0;
	while (input_num[i + len] >= '0' && input_num[i + len] <= '9')
		len++;
	lst.nbr = malloc(sizeof(char) * (len + 1));
	if (!lst.nbr)
		return (0);
	lst.nbr[len] = 0;
	len--;
	while (input_num[i] >= '0' && input_num[i] <= '9')
		lst.nbr[len--] = input_num[i++];
	if (input_num[i] != '\0' || ft_count_total(lst) == 0)
	{
		free(lst.nbr);
		return (0);
	}
	return (1);
}
