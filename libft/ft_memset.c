/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 02:19:58 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/30 15:19:19 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	val;
	size_t			i;

	val = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = val;
		i++;
	}
	return (b);
}
