/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:54:23 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/17 19:49:28 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_puthexlow(unsigned int nbr , int *len)
{
    char *hex;
    char c;

    hex = "0123456789abcdef";
    if (nbr >= 16)
    {
        ft_puthexlow(nbr / 16, len);
    }
    c = nbr % 16;
    ft_putchar(hex[c], len);
}


// int main(void)
// {
//     unsigned int n = 200039383;
//     int len = 0;
//     ft_puthexlow(n, &len); 
    
//     printf("\n%x", n);
// }