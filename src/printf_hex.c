/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:26:06 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/05/21 12:43:39 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

int	ft_leng(unsigned int n)
{
	int	leng;

	leng = 0;
	while (n > 0)
	{
		n /= 16;
		leng++;
	}
	return (leng);
}

void	pro_hex(unsigned int n, char lower)
{
	int	result;

	if (n >= 16)
	{
		pro_hex(n / 16, lower);
		pro_hex(n % 16, lower);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', 1);
		else
		{
			if (lower == 'x')
				ft_putchar_fd(n - 10 + 'a', 1);
			else
				ft_putchar_fd(n - 10 + 'A', 1);
		}
	}
}

int	printf_hex(unsigned int n, char lower)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
	{
		pro_hex(n, lower);
	}
	return (ft_leng(n));
}
