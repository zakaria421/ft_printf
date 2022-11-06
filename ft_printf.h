/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:34:07 by zbentale          #+#    #+#             */
/*   Updated: 2022/11/06 01:32:43 by zbentale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_puthexnbr(unsigned int n, int *count);
void	ft_putnbr(int n, int *count);
char	ft_putstr(char *s, int *count);
void	ft_putunsinbr(unsigned int n, int *count);
void	ft_puthexlownbr(size_t n, int *count);

#endif
