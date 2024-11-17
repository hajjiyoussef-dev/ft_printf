/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:50:57 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/16 23:25:28 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


void    ft_puthex(unsigned long n, int *len)
{
    char *hex = "0123456789abcdef";
    char c;
    
    if (n >= 16)
    {
        ft_puthex(n / 16, len);
    }
    c = hex[n % 16];
    ft_putchar(c, len);
}
void    ft_putadd(void *ptr, int *len)
{
    unsigned long n = (unsigned long) ptr;

    ft_putchar('0', len);
    ft_putchar('x', len);
    if (!ptr)
    {
        ft_putchar('0', len);
        return;
    }
    ft_puthex(n, len);
}


// int main(void)
// {
//     int a = 100;
//     int *ptr = &a;
//     int len = 0;
//     ft_putadd(ptr, &len);
//     printf("\n%p", ptr);
// }