/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 02:36:26 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/18 00:20:13 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', len);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10, len);
	}
	if (nbr <= 9)
	{
		ft_putchar(nbr + '0', len);
	}
}
