/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsinbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:43:08 by zbentale          #+#    #+#             */
/*   Updated: 2022/11/06 00:55:41 by zbentale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsinbr(unsigned int n, int *count)
{
	if (n < 0)
	{
		ft_putchar('-');
		*count = *count + 1;
		n = -n;
	}
	if (n >= 10)
	{
		ft_putunsinbr(n / 10, count);
		ft_putchar(n % 10 + 48);
		*count = *count + 1;
	}
	if (n < 10)
	{
		ft_putchar(n % 10 + 48);
		*count = *count + 1;
	}
}
