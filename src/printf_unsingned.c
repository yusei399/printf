/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_unsingned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:26:27 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/05/18 17:26:28 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

static int	unsig_size(unsigned int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static char	*ft_unitoa(unsigned int n)
{
	char	*dest;
	int		size;

	size = unsig_size(n);
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest[size] = '\0';
	while (n != 0)
	{
		dest[size - 1] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	return (dest);
}

int	printf_unsigned(unsigned int n)
{
	int		leng;
	char	*unsig;

	leng = 0;
	if (n == 0)
		leng += write(1, "0", 1);
	else
	{
		unsig = ft_unitoa(n);
		leng += printf_str(unsig);
		free(unsig);
	}
	return (leng);
}
