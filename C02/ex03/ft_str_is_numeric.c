/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:14:31 by rboland           #+#    #+#             */
/*   Updated: 2024/09/07 16:23:38 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
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
   char *str = "125QEWES94";
   int	i;

   i = ft_str_is_numeric(str);
   printf("%d\n", i);
}
*/
