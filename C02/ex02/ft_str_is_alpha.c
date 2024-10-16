/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:46:37 by rboland           #+#    #+#             */
/*   Updated: 2024/09/08 15:16:49 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122 || (str[i] > 90 && str[i] < 97))
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
	char	*str = "QWEdqdaeq/6eeqweQWEqd";
	int	i;

	i = ft_str_is_alpha(str);
	printf("%d\n", i);

	return 0;
}
*/
