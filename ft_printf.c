/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:28:37 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/16 14:02:07 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void help_printf(const char *forma, va_list args, int *len, int *count)
{
    if (forma[*count] == 's')
        ft_putchar(va_arg(args, char *), len);
    else if (forma[*count] == 'd' || forma[*count] == 'i')
        ft_putnbr(va_arg(args, int), len);
}

int ft_printf(const char *forma, ...)
{
    va_list args;
    int count;
    int len;

    va_start(args, forma);
    len = 0;
    count = 0;
    if (write(1, "", 0) == -1)
        return (-1);
    while (*forma)
    {
        if (forma[count] != '%')
            ft_putchar(forma[count++], &len);
        else if (forma[count] == '%' && forma[count + 1] == '\0')
            break;
        else
        {
            count++;
            help_printf(forma, args, &len, &count);
        }
    }
    va_end(args);
    return (len);
}

int main(void)
{
    ft_printf("%d", 10000000);
}