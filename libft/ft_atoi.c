/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 04:19:40 by fdeville          #+#    #+#             */
/*   Updated: 2025/10/28 18:15:19 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static int	ft_isspace(int c)
{
	char	ch;

	ch = (char)c;
	return (ch == ' '
		|| ch == '\t'
		|| ch == '\n'
		|| ch == '\r'
		|| ch == '\v'
		|| ch == '\f');
}

int	ft_atoi(const char *s)
{
	int	i;
	int	mul;
	int	res;

	i = 0;
	res = 0;
	mul = 1;
	if (!s)
		return (0);
	while (s[i] && ft_isspace(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			mul = -mul;
		i++;
	}
	while (s[i] && ft_isdigit(s[i]))
	{
		res *= 10;
		res += s[i] - '0';
		i++;
	}
	return (res * mul);
}
