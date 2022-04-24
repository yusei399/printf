/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:51:50 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/23 16:02:08 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p_len(uintptr_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_pstr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_pstr(n / 16);
		ft_pstr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'),1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_pri_ptr(unsigned long long p)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (p == 0)
		len += write(1, "0", 1);
	else
	{
		ft_pri_ptr(p);
		len += ft_p_len(p);
	}
	return (len);
}