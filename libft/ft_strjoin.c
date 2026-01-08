/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:07:18 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/17 06:39:10 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	l1;
	size_t	l2;
	char	*s3;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	s3 = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s3[l1 + i] = s2[i];
		i++;
	}
	s3[l1 + l2] = '\0';
	return (s3);
}
