/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:22:50 by rboland           #+#    #+#             */
/*   Updated: 2024/09/08 18:23:13 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char	dest[100] = "Debut et ";
	char	src[100] = "la fin =).";

	printf("%s", dest);
	printf("%s\n", src);
	ft_strcat(dest, src);
	printf("%s", dest);
	return 0;
}
*/
