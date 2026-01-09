/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:19:03 by fdeville          #+#    #+#             */
/*   Updated: 2026/01/09 15:09:12 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	int				i;

	address = (unsigned long)ptr;
	if (!ptr)
		return (write(1, "(nil)", 5));
	i = write(1, "0x", 2);
	return (i + ft_putnbr_base_l(address, "0123456789abcdef"));
}
