/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:57:42 by aeser             #+#    #+#             */
/*   Updated: 2022/01/09 00:34:39 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	index;

	count = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
			count++;
		index++;
	}
	return (count);
}

static void	write_word(char *dest, const char *src, char c)
{
	size_t	index;

	index = 0;
	while (src[index] != c && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
}

static int	write_split(char **split, char const *s, char c)
{
	size_t	word;
	size_t	start;
	size_t	word_len;

	start = 0;
	word = 0;
	while (s[start])
	{
		if (s[start] == c)
		{
			start++;
			continue ;
		}
		word_len = 0;
		while (s[start + word_len] != c && s[start + word_len] != '\0')
			word_len++;
		split[word] = (char *)malloc(sizeof(char) * word_len + 1);
		if (!split[word])
			return (-1);
		write_word(split[word], s + start, c);
		start += word_len;
		word++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;

	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	split[words] = 0;
	if (write_split(split, s, c) == -1)
		return (NULL);
	return (split);
}
