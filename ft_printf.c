/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:28:37 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/18 00:45:49 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	help_printf(char forma, va_list args, int *len)
{
	if (forma == '%')
		ft_putchar('%', len);
	else if (forma == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (forma == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (forma == 'd' || forma == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (forma == 'p')
		ft_putadd(va_arg(args, void *), len);
	else if (forma == 'u')
		ft_putnbru(va_arg(args, unsigned int), len);
	else if (forma == 'x')
		ft_puthexlow(va_arg(args, unsigned int), len);
	else if (forma == 'X')
		ft_puthexup(va_arg(args, unsigned int), len);
	else
		ft_putchar(forma, len);
}

int	ft_printf(const char *forma, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, forma);
	len = 0;
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (forma[i])
	{
		if (forma[i] == '%')
		{
			i++;
			if (forma[i] == '\0')
				break ;
			help_printf(forma[i], args, &len);
		}
		else
			ft_putchar(forma[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
