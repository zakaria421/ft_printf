/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:42:51 by zbentale          #+#    #+#             */
/*   Updated: 2022/11/06 00:49:04 by zbentale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexnbr(unsigned int n, int *count)
{
	if (n > 15)
	{
		ft_puthexnbr(n / 16, count);
	}
	if (n % 16 > 9 && n % 16 < 16)
	{
		ft_putchar(n % 16 + 55);
		*count = *count + 1;
	}
	else
	{
		ft_putchar(n % 16 + 48);
		*count = *count + 1;
	}
}
