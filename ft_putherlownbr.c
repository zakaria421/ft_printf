/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putherlownbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:42:42 by zbentale          #+#    #+#             */
/*   Updated: 2022/11/06 00:46:38 by zbentale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexlownbr(size_t n, int *count)
{
	if (n > 15)
	{
		ft_puthexlownbr(n / 16, count);
	}
	if (n % 16 > 9 && n % 16 < 16)
	{
		ft_putchar(n % 16 + 87);
		*count = *count + 1;
	}
	else
	{
		ft_putchar(n % 16 + 48);
		*count = *count + 1;
	}
}
