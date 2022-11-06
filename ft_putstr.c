/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:54:29 by zbentale          #+#    #+#             */
/*   Updated: 2022/11/06 00:53:53 by zbentale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", count);
		return (0);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		*count = *count + 1;
		i++;
	}
	return (0);
}
