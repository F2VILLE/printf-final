/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:13:48 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/27 20:26:19 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	char			c;
	unsigned int	i;
	size_t			l;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	res = (char *)malloc((l + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < l)
	{
		c = f(i, s[i]);
		res[i] = c;
		i++;
	}
	res[i] = '\0';
	return (res);
}
