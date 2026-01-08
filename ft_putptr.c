/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:19:03 by fdeville          #+#    #+#             */
/*   Updated: 2026/01/08 03:35:09 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	int				i;

	address = (unsigned long)ptr;
	if (!ptr)
		return (write(1, "(nil)", 5));
	i = write(1, "0x", 2);
	return (i + ft_putnbr_base_l(ptr, "0123456789abcdef"));
}
