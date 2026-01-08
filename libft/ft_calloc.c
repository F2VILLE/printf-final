/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:32:08 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/30 15:17:11 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*p;

	p = NULL;
	if ((n != 0 && size != 0) && ((n * size) / size != n))
		return (NULL);
	p = (unsigned char *)malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, n * size);
	return ((void *)p);
}
