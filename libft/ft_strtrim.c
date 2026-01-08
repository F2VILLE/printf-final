/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:00:48 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/17 05:55:26 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_contain(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		lc;
	int		rc;
	int		len;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	lc = 0;
	while (s1[lc] && ft_contain(s1[lc], set))
		lc++;
	if (lc == len)
		return (ft_strdup(""));
	rc = 0;
	while (rc < len - lc && ft_contain(s1[len - rc - 1], set))
		rc++;
	s2 = (char *)malloc((len - lc - rc + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (i++ < len - lc - rc)
		s2[i - 1] = s1[lc + i - 1];
	s2[i - 1] = '\0';
	return (s2);
}
