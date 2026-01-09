/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:49:16 by fdeville          #+#    #+#             */
/*   Updated: 2026/01/09 15:08:55 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	written;

	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	i = 0;
	written = 0;
	while (s[i])
	{
		written += ft_putchar(s[i]);
		i++;
	}
	return (written);
}
