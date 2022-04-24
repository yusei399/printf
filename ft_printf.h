/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:53:34 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/23 16:16:42 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <inttypes.h>

int		ft_printf(const char *format, ...);
void	ft_putstr(char *str);
int		ft_pristr(char *str);
int		ft_pnbr(int n);
int		ft_percent(void);
int		ft_formats(va_list args, const char format);
int		print_putchar(int c);
int		ft_len(unsigned int n);
void	ft_puthex(unsigned int	n, const char format);
int		ft_prihex(unsigned int n, const char format);
int		ft_n_len(unsigned int n);
int		ft_unipri(unsigned int n);
int		ft_unipri(unsigned int n);
char	*ft_unitoa(unsigned int n);
int		ft_n_len(unsigned int n);

#endif