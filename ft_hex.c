/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:22:01 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/23 14:20:53 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_len(unsigned int n)
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

void	ft_puthex(unsigned int	n, const char format)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, format);
		ft_puthex(n % 16, format);
	}
	else
	{
		if (n <= 9)
		{
			ft_putchar_fd((n + '0'), 1);
		}
		else
		{
			if (format == 'x')
			{
				ft_putchar_fd((n - 10, 'a'));
			}
			if (format == 'X')
			{
				ft_putchar_fd((n - 10, 'A'));
			}
		}
	}
}

int	ft_prihex(unsigned int n, const char format)
{
	if (n == 0)
		return (write(1, '0', 1));
	else
		ft_puthex(n, format);
	return (ft_len(n));
}
