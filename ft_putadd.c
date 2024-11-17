/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:50:57 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/18 00:33:21 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_puthex(unsigned long n, int *len)
{
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthex(n / 16, len);
	}
	c = hex[n % 16];
	ft_putchar(c, len);
}

void	ft_putadd(void *ptr, int *len)
{
	unsigned long	n;

	n = (unsigned long) ptr;
	ft_putchar('0', len);
	ft_putchar('x', len);
	if (!ptr)
	{
		ft_putchar('0', len);
		return ;
	}
	ft_puthex(n, len);
}
