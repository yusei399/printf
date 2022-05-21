/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:26:11 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/05/18 17:26:13 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

static int	ft_putstri(char *args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		write(1, &args[i], 1);
		i++;
	}
	return (i);
}

int	printf_n(unsigned int n)
{
	char			*dest;
	unsigned int	result;

	dest = ft_itoa(n);
	result = ft_putstri(dest);
	free(dest);
	return (result);
}
