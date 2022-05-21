/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:26:21 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/05/18 17:26:23 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

static int	ft_putstr(char *args)
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

int	printf_str(char *args)
{
	int	i;

	if (args == NULL)
		return (ft_putstr("(null)"));
	i = 0;
	while (args[i])
	{
		write(1, &args[i], 1);
		i++;
	}
	return (i);
}
