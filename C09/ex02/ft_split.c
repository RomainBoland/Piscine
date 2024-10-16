/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:30:13 by rboland           #+#    #+#             */
/*   Updated: 2024/09/23 11:04:03 by rboland          ###   ########.fr       */
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

int	ft_is_charset(char c, char *charset)
{
	int	j;
	
	j = 0;
	while (charset[j])
	{
		if (charset[j] == c)
			return (1);
		j++;
	}
	return (0);
}	

int     ft_count_words(char *str, char *charset)
{
    int i;
    int count;
    int in_word;

    i = 0;
    count = 0;
    in_word = 0;
    while (str[i])
    {
	if (!ft_is_charset(str[i], charset) && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (ft_is_charset(str[i], charset))
            in_word = 0;
        i++;
    }
    return (count);
}

char    *ft_get_word(char *str, char *charset, int *index)
{
    int		start;
    int		word_size;
    char	*word;
    int		i;

    i = -1;
    start = *index;
    word_size = 0;
    while (str[*index] && ft_is_charset(str[*index], charset))
        (*index)++;
    start = *index;
    while (str[*index] && !ft_is_charset(str[*index], charset))
    {
        word_size++;
        (*index)++;
    }
    word = (char *)malloc(sizeof(char) * (word_size + 1));
    if (!word)
        return (NULL);
    while (i++ < word_size)
	word[i] = str[start + i];  
    word[word_size] = '\0';
    return (word);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	index;
	char	**split_tab;
	int	words;

	words = ft_count_words(str, charset);
	split_tab = (char **)malloc(sizeof(char*) * (words + 1));
	i = 0;
	index = 0;
	while (i < words)
	{
		split_tab[i] = ft_get_word(str, charset, &index);
		if(!split_tab[i])
			return (NULL);
		i++;
	}
	split_tab[i] = (NULL);
	return (split_tab);
}

#include <stdio.h>

int     main(int argc, char *argv[])
{
    char    *charset = ", ";
    char    **result;
    int     i = 0;

    if (argc == 2)
    {
        result = ft_split(argv[1], charset);
        while (result[i])
        {
            printf("Word %d: %s\n", i, result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
return (0);
}
