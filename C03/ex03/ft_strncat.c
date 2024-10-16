/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:16:53 by rboland           #+#    #+#             */
/*   Updated: 2024/09/10 18:59:07 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main()

{
	char	dest[50] = "Hello";
	char	src[50] = "World";

	printf("dest : %s\n", dest);
	printf("src : %s\n", src);

	printf("Dest apres le cat : %s\n", ft_strncat(dest, src, 8));
	return 0;
}
*/
