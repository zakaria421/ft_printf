/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:54:26 by zbentale          #+#    #+#             */
/*   Updated: 2022/11/06 00:51:20 by zbentale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			*count = *count + 11;
			return ;
		}
		ft_putchar('-');
		*count = *count + 1;
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putchar(n % 10 + 48);
		*count = *count + 1;
	}
	if (n < 10)
	{
		ft_putchar(n % 10 + 48);
		*count = *count + 1;
	}
}
