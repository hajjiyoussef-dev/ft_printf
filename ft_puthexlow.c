/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:54:23 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/18 00:15:48 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexlow(unsigned int nbr, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_puthexlow(nbr / 16, len);
	}
	ft_putchar(hex[nbr % 16], len);
}
