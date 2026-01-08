/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:20:25 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/30 15:29:34 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	skip_separators(char const *s, int i, char c)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static int	fill_word(char **r, char const *s, int i, char c)
{
	int	k;
	int	n;

	k = 0;
	n = i;
	while (s[n] && s[n] != c)
		n++;
	*r = (char *)malloc((n - i + 1) * sizeof(char));
	if (!*r)
		return (-1);
	while (i < n)
		(*r)[k++] = s[i++];
	(*r)[k] = '\0';
	return (i);
}

static int	fill_split(char **r, char const *s, char c)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 0;
	while (s[i])
	{
		i = skip_separators(s, i, c);
		if (!s[i])
			return (0);
		res = fill_word(&r[j], s, i, c);
		if (res == -1)
			return (-1);
		i = res;
		j++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[words] = NULL;
	if (fill_split(res, s, c) < 0)
	{
		i = 0;
		while (res[i])
		{
			free(res[i]);
			i++;
		}
		free(res);
		return (NULL);
	}
	return (res);
}
