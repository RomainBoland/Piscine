/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 08:56:06 by rboland           #+#    #+#             */
/*   Updated: 2024/09/08 13:38:08 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
	char src[30] = "sourcesourcesource";
	char dst[30] = "destination";

	printf("source avant : %s\n", src);
	printf("destination avant: %s\n", dst);

	ft_strcpy(dst, src);

	printf("source apres : %s\n", src);
	printf("destination apres : %s\n", dst);

	return 0;
}
*/
