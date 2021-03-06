/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:37:48 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/05/01 23:10:35 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (('0' <= c && c <= '9')
		|| ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}
