/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_lu.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:47:53 by fdeville          #+#    #+#             */
/*   Updated: 2026/01/08 04:17:40 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_strlen(char *str)
{
	int	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static int	has_duplicates(char *str)
{
	int	i;
	int	j;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		j = 1;
		while (str[i + j])
		{
			if (str[i + j] == str[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	valid_base(char *base)
{
	int	i;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (has_duplicates(base))
		return (0);
	return (1);
}

int	ft_putnbr_base_u(unsigned int nbr, char *base)
{
	unsigned int	base_l;
	int				written;

	written = 0;
	if (!valid_base(base))
		return (written);
	base_l = ft_strlen(base);
	if (base_l > 0)
	{
		if (nbr > base_l - 1)
			written += ft_putnbr_base_u(nbr / base_l, base);
		written += write(1, &base[nbr % base_l], 1);
	}
	return (written);
}

int	ft_putnbr_base_l(unsigned long nbr, char *base)
{
	unsigned long	base_l;
	int				written;

	written = 0;
	if (!valid_base(base))
		return (written);
	base_l = ft_strlen(base);
	if (base_l > 0)
	{
		if (nbr > base_l - 1)
			written += ft_putnbr_base_l(nbr / base_l, base);
		written += write(1, &base[nbr % base_l], 1);
	}
	return (written);
}
