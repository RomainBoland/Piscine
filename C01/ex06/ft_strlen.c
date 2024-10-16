/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:53:21 by rboland           #+#    #+#             */
/*   Updated: 2024/09/05 14:11:05 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	result;

	result = ft_strlen(argv[1]);
	printf("Taille de la chaine : %d\n", result);
	return (0);
}
