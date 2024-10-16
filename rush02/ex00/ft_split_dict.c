/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilogie <tilogie@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:19:00 by tilogie           #+#    #+#             */
/*   Updated: 2024/09/22 11:19:01 by tilogie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	check_sep(char *str, char *charset, int i)
{
	while (str[i] == 32 || str[i] == '\n')
		i++;
	if (charset[0] == ' ')
	{
		if (str[i] == ':')
			i++;
		else
			return (0);
	}
	while (str[i] == 32)
		i++;
	return (i);
}

int	ft_len(char *str, char *charset, int index)
{
	int	i;

	i = 0;
	while (str[index + i] && !(charset[0] == str[index + i]
			|| (charset[1] == ':' && str[index + i] == ':')))
		i++;
	return (i);
}

int	count_words(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == '\n')
			i++;
		if (str[i] && str[i] != '\n')
			count++;
		while (str[i] && str[i] != '\n')
			i++;
	}
	return (count);
}

char	*get_word(char *str, char *charset)
{
	static int	i = 0;
	int			j;
	int			len;
	char		*word;

	i = check_sep(str, charset, i);
	if (charset[0] == '\n')
		len = ft_len(str, " :", i);
	else
		len = ft_len(str, "\n", i);
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (0);
	j = 0;
	while (j < len)
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = 0;
	return (word);
}

int	ft_parse_dic(char *dict, int words, t_list lst, char *input_num)
{
	int	i;

	i = 0;
	while (i < words)
	{
		lst.keys[i] = get_word(dict, "\n");
		lst.word_list[i] = get_word(dict, " :");
		if (!lst.word_list[i] || !lst.keys)
		{
			if (!lst.keys)
				free_fct(lst, i - 1, i - 1);
			else
				free_fct(lst, i, i - 1);
			return (0);
		}
		i++;
	}
	lst.keys[i] = 0;
	lst.word_list[i] = 0;
	if (ft_parse_num(lst, input_num) == 0)
	{
		free_fct(lst, i - 1, i - 1);
		return (0);
	}
	return (1);
}
