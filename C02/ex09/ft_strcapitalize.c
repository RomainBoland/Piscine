/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:56:17 by rboland           #+#    #+#             */
/*   Updated: 2024/09/08 11:56:50 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 90 && str[i] >= 65)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	i++;
	while (str[i])
	{
		if ((str[i - 1] < 48 || str[i - 1] > 57)
			&& (str[i - 1] < 65 || str[i - 1] > 90)
			&& (str[i - 1] < 97 || str[i - 1] > 122))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return(0);
}
*/
