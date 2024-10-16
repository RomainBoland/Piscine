/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:26:06 by rboland           #+#    #+#             */
/*   Updated: 2024/09/07 16:30:12 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
   char *str = "asdasdasd";
   int	i;

   i = ft_str_is_lowercase(str);
   printf("%d\n", i);
}
*/
