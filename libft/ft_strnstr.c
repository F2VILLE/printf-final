/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:05:00 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/17 06:38:54 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j] && (i + j) < len)
		{
			if (j == 0)
				ptr = str + i;
			j++;
		}
		if (to_find[j] == '\0')
			return (ptr);
		i++;
	}
	return (0);
}
