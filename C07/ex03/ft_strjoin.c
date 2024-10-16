/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:12:48 by rboland           #+#    #+#             */
/*   Updated: 2024/09/17 18:45:41 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		len += ft_strlen(sep) * (size - 1);
	return (len);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		totalsize;

	if (size == 0)
	{
		dest = malloc(1 * sizeof(char));
		dest[0] = '\0';
	}
	totalsize = total_len(size, strs, sep);
	dest = malloc(totalsize * sizeof(char));
	if (!dest)
		return (0);
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*test[] = {"bite", "cul", "chatte"};
	char	sep[] = " bite ";

	printf("%s", ft_strjoin(3, test, sep));
	return 0;
}
*/
