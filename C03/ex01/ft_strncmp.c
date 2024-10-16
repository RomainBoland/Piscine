/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:23:52 by rboland           #+#    #+#             */
/*   Updated: 2024/09/10 15:02:09 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] == s2[i]) && s1[i])
	{
		i++;
	}
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}

/*
int	main()
{
	char	s1[] = "hello";
	char	s2[] = "Hello";
	unsigned int	n = 4;

	printf("valeur retournee : %d\n", ft_strncmp(s1, s2, n));
	return 0;
}
*/
