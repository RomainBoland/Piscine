/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:15:52 by rboland           #+#    #+#             */
/*   Updated: 2024/09/07 20:16:04 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[30] = "Source";
	char	dest[30] = "Destination";
	printf("source avant : %s\n", src);
	printf("destination avant : %s\n", dest);
	ft_strncpy(dest, src, 30);
	printf("source apres : %s\n", src);
	printf("destination apres : %s\n", dest);
	return (0);
}
*/
