/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:57:53 by rboland           #+#    #+#             */
/*   Updated: 2024/09/11 03:29:29 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	valeur;

	valeur = 0;
	signe = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signe++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		valeur = valeur * 10 + (str[i] - '0');
		i++;
	}
	if ((signe % 2) > 0)
		return (valeur * -1);
	else
		return (valeur);
}
/*int main(void)
{
	char	str[] = " 	 -------+++-+-2147483648";
	printf("%d\n", ft_atoi(str));
	return 0;
}*/
