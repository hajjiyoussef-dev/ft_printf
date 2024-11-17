/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:28:37 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/17 00:54:15 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void help_printf(const char *forma, va_list args, int *len, int *count)
{
    if (forma[*count] == 's')
        ft_putchar(*va_arg(args, char *), len);
    else if (forma[*count] == 'c')
        ft_putchar(va_arg(args, int), len);
    else if (forma[*count] == 'd' || forma[*count] == 'i')
        ft_putnbr(va_arg(args, int), len);
    else if (forma[*count] == '%')
        ft_putchar('%', len);
    else if (forma[*count] == 'p')
        ft_putadd(va_arg(args, void *), len);
    else if (forma[*count] == 'u')
        ft_putnbru(va_arg(args, unsigned int), len);
    else if (forma[*count] == 'x')
        ft_puthexlow(va_arg(args, len), len);
        
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
            count++;
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
   // ft_printf("");
   int p =  42;
   int *ptr = &p ;

   printf("%p ", ptr);
   
   
}