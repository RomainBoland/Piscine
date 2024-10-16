/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:39:27 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:39:41 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

t_list	ft_find_large(t_list lst, int i, int count_total)
{
	char	*large_nbr;
	int		j;

	large_nbr = malloc(sizeof(char) * (i + 2));
	if (!large_nbr)
	{
		lst.count = -1;
		return (lst);
	}
	large_nbr[0] = '1';
	j = 1;
	while (j < i + 1)
	{
		large_nbr[j] = '0';
		j++;
	}
	large_nbr[j] = 0;
	lst.index_list[count_total] = ft_search(large_nbr, lst);
	lst.count++;
	free(large_nbr);
	return (lst);
}

t_list	ft_first_digit(t_list lst, int i, int j, int count_total)
{
	char	nbr[2];

	if (j % 3 == 0 && lst.nbr[i + j] != '0' && lst.nbr[i + j + 1] != '1')
	{
		nbr[0] = lst.nbr[i + j];
		nbr[1] = 0;
		lst.index_list[count_total + lst.count] = ft_search(nbr, lst);
		lst.count++;
	}
	return (lst);
}

t_list	ft_second_digit(t_list lst, int i, int j, int count_total)
{
	char	nbr[3];

	nbr[2] = 0;
	if (j % 3 == 1 && lst.nbr[i + j] != '0')
	{
		if (lst.nbr[i + j] == '1')
		{
			nbr[0] = '1';
			nbr[1] = lst.nbr[i + j - 1];
			lst.index_list[count_total + lst.count] = ft_search(nbr, lst);
			lst.count++;
		}
		else
		{
			nbr[0] = lst.nbr[i + j];
			nbr[1] = '0';
			lst.index_list[count_total + lst.count] = ft_search(nbr, lst);
			lst.count++;
		}
	}
	return (lst);
}

t_list	ft_third_digit(t_list lst, int i, int j, int count_total)
{
	char	nbr[2];

	if (j % 3 == 2 && lst.nbr[i + j] != '0')
	{
		lst.index_list[count_total + lst.count] = ft_search("100", lst);
		lst.count++;
		nbr[0] = lst.nbr[i + j];
		nbr[1] = 0;
		lst.index_list[count_total + lst.count] = ft_search(nbr, lst);
		lst.count++;
	}
	return (lst);
}

t_list	ft_find_key(t_list lst, int i, int count_total)
{
	int	j;
	int	write_large;

	write_large = 0;
	lst.count = 0;
	j = 0;
	while (lst.nbr[i + j] && j < 3)
	{
		if (i > 0 && lst.nbr[i + j] > '0' && write_large == 0)
		{
			lst = ft_find_large(lst, i, count_total);
			if (lst.count == -1)
				return (lst);
			write_large = 1;
		}
		lst = ft_first_digit(lst, i, j, count_total);
		lst = ft_second_digit(lst, i, j, count_total);
		lst = ft_third_digit(lst, i, j, count_total);
		j++;
	}
	return (lst);
}
