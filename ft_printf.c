/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:39:37 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/23 16:14:19 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += print_putchar(va_arg(args, int));
	else if (format == 's')
		len += pristr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len += ft_pnbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_prihex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_percent();
	else if (format == 'p')
		len += ft_pri_ptr(va_arg(args, unsigned long long));
	else if (format == 'u')
		len += ft_unipri(va_arg(args, unsigned int));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}