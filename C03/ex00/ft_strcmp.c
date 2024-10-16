/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:25:36 by rboland           #+#    #+#             */
/*   Updated: 2024/09/10 14:47:06 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main()
{
	char	s1[] = "hello123/!@#";
	char	s2[]  = "hello123/!@#";
	int	oui;
	oui = ft_strcmp(s1, s2);
	printf("Valeur : %d\n", oui);

	return 0;
}
*/
