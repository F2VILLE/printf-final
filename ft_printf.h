/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 02:35:05 by fdeville          #+#    #+#             */
/*   Updated: 2026/01/08 04:25:39 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>

int	ft_putnbr(int n);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr_base_u(unsigned int nbr, char *base);
int	ft_putnbr_base_l(unsigned long nbr, char *base);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putptr(void *ptr);
int	ft_printf(const char *format, ...);

#endif
