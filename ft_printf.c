/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:09:24 by zbentale          #+#    #+#             */
/*   Updated: 2022/11/06 05:23:03 by zbentale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		if (str[i] == '%')
		{
			if (str [i + 1] == '%'  && count++ >= 0)
				ft_putchar('%');
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				ft_putnbr(va_arg(args, int), &count);
			else if (str[i + 1] == 's')
				ft_putstr(va_arg(args, char *), &count);
			else if (str[i + 1] == 'c'  && count++ >= 0)
				ft_putchar(va_arg(args, int));
			else if (str[i + 1] == 'u')
				ft_putunsinbr(va_arg(args, int), &count);
			else if (str[i + 1] == 'X')
				ft_puthexnbr(va_arg(args, int), &count);
			else if (str[i + 1] == 'x')
				ft_puthexlownbr((unsigned int)(va_arg(args, int)), &count);
			else if (str[i + 1] == 'p')
			{
				ft_putstr("0x", &count);
				ft_puthexlownbr((size_t)(va_arg(args, void *)), &count);	
			}
            i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
