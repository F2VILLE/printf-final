/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:23:18 by fdeville          #+#    #+#             */
/*   Updated: 2026/01/09 15:19:11 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(char c, va_list *args)
{
	int	written;

	written = 0;
	if (c == '%')
		written += ft_putchar('%');
	else if (c == 'd' || c == 'i')
		written += ft_putnbr(va_arg(*args, int));
	else if (c == 'c')
		written += ft_putchar(va_arg(*args, int));
	else if (c == 's')
		written += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		written += ft_putptr(va_arg(*args, void *));
	else if (c == 'u')
		written += ft_putnbr_unsigned(va_arg(*args, unsigned int));
	else if (c == 'x')
		written += ft_putnbr_base_u(va_arg(*args, int), "0123456789abcdef");
	else if (c == 'X')
		written += ft_putnbr_base_u(va_arg(*args, int), "0123456789ABCDEF");
	else
		written += ft_putchar('%');
	return (written);
}

static int	ft_valid_format(const char *format)
{
	if (!format)
		return (0);
	if (format[0] == '%' && !format[1])
		return (0);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		written;

	if (!ft_valid_format(format))
		return (-1);
	va_start(args, format);
	i = 0;
	written = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (0);
			written += ft_print_format(format[i], &args);
		}
		else
		{
			written += ft_putchar(format[i]);
		}
		i++;
	}
	return (written);
}
/*
#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*s = "meow";
	unsigned long u = 18446744073709551615;
	int		written;
	int		og;

	written = ft_printf(
	"test %%%% %d %c \"%s\"\n%d (10) => 
	%X (16)\nUnsigned : %u\n%p\n\nHex maxint : %x\n%X\n",
		19, 'V', s, 42, 42, u, &u, u, u);
	og = printf(
	"test %%%% %d %c \"%s\"\n%d (10) => 
	%X (16)\nUnsigned : %u\n%p\n\nHex maxint : %x\n%X\n",
		19, 'V', s, 42, 42, u, &u, u, u);
	// int a = ft_printf("ft: %d | og: %d\n\n", written, og);
	// int b = printf("ft: %d | og: %d\n\n", written, og);
	int a = ft_printf("%p\n", &u);
	int b = printf("%p\n", &u);
	ft_printf("ft_printf returned : %d\nprintf returned : %d\n\n", a, b);

	return (0);
}
// #include "ft_printf.h"
// #include <limits.h>
// #include <stdio.h>

// int main(void)
// {
//     int          a = 42;
//     unsigned int b = 19;
// 	int			imax = INT_MAX;
//     char        str[] = "This is a str";

// 	int	r = printf("===== START =====\n%s\n%% this escapes the %% char\n
a = %d\n(%%i) a = %i\n(unsigned) b = %u\n\n&a = %p\n\n(hex) a = %x\n\n
(HEX) b = %X\n\nimax = %d\n\nNull pointer = %p\n\n====== END ======\n", 
// 		str, a,a, b, &a, a, b, imax, NULL);
//     int ft_r = ft_printf("===== START =====\n%s\n%% this escapes the %% char\n
a = %d\n(%%i) a = %i\n(unsigned) b = %u\n\n&a = %p\n\n(hex) a = %x\n\n
(HEX) b = %X\n\nimax = %d\n\nNull pointer = %p\n\n====== END ======\n", 
// 		str, a,a, b, &a, a, b, imax, NULL);
// 	printf("printf returned %d\n\nft_printf returned %d", r, ft_r);
// 	return (0);
// }	

*/
