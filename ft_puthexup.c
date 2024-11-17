/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:49:49 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/17 19:57:09 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_puthexup(unsigned int nbr, int *len)
{
    char *hex;

    hex = "0123456789ABCDEF";
    if (nbr >= 16)
    {
        ft_puthexup(nbr / 16, len);
    }
    ft_putchar(hex[nbr % 16] ,len);
}

// int main(void)
// {
//     unsigned int i =  23456782; 

//     int a = -2345;
//     int len =  0;
//     ft_puthexup(i, &len);
//     write(1,"\n ", 2);
//     ft_puthexup(a, &len);
//     write(1,"\n ", 2);
//     printf("%X , %X ", i, a);
    
// }