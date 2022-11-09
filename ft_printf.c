/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:09:24 by zbentale          #+#    #+#             */
/*   Updated: 2022/11/09 05:23:26 by zbentale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print(const char *str, int i, va_list args, int *count)
{
	if (str [i + 1] == '%')
	{
		*count = *count + 1;
		ft_putchar('%');
	}
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		ft_putnbr(va_arg(args, int), &(*count));
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(args, char *), &(*count));
	else if (str[i + 1] == 'c')
	{
		ft_putchar(va_arg(args, int));
		*count = *count + 1;
	}
	else if (str[i + 1] == 'u')
		ft_putunsinbr(va_arg(args, int), &(*count));
	else if (str[i + 1] == 'X')
		ft_puthexnbr(va_arg(args, int), &(*count));
	else if (str[i + 1] == 'x')
		ft_puthexlownbr((unsigned int)(va_arg(args, int)), &(*count));
	else if (str[i + 1] == 'p')
	{
		ft_putstr("0x", &(*count));
		ft_puthexlownbr((size_t)(va_arg(args, void *)), &(*count));
	}
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%' && count++ >= 0)
			ft_putchar(str[i]);
		if (str[i] == '%' && str[i + 1])
		{
			print(str, i, args, &count);
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
