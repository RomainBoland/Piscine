/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:44:03 by rboland           #+#    #+#             */
/*   Updated: 2024/09/10 14:34:39 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[i])
	{
		return (&str[i]);
	}
	while (str[i])
	{
		j = 0;
		while ((str[i + j]) && (str[i + j] == to_find[j]))
		{
			if (!to_find[j + 1])
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str[] = "Hello world";
	char	to_find[] = "z";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
*/
