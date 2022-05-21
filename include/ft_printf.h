/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:25:53 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/05/21 12:44:49 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *src, ...);
int	printf_str(char *args);
int	printf_n(unsigned int n);
int	printf_unsigned(unsigned int n);
int	printf_ptr(unsigned long long ptr);
int	printf_hex(unsigned int n, char lower);

#endif
