/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:25:27 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/30 15:10:43 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup || !src)
		return (NULL);
	while (src[i++])
		dup[i - 1] = src[i - 1];
	dup[i - 1] = '\0';
	return (dup);
}
