/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:49:49 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/18 00:36:08 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexup(unsigned int nbr, int *len)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_puthexup(nbr / 16, len);
	}
	ft_putchar(hex[nbr % 16], len);
}
