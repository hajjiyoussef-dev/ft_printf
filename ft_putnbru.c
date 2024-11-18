/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 23:41:30 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/18 00:37:37 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int nbr, int *len)
{
	if (nbr >= 10)
	{
		ft_putnbru(nbr / 10, len);
		ft_putchar((nbr % 10) + '0', len);
	}
	else
		ft_putchar((nbr + '0'), len);
}
