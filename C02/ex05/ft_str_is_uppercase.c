/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:30:40 by rboland           #+#    #+#             */
/*   Updated: 2024/09/07 16:34:24 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
   char *str = "AZ";
   int	i;

   i = ft_str_is_uppercase(str);
   printf("%d\n", i);
}
*/
