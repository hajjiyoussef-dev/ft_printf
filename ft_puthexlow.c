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

    hex = "0123456789abcdef";
    if (nbr >= 16)
    {
        ft_puthexlow(nbr / 16, len);
    }
    ft_putchar(hex[nbr % 16], len);
}


// int main(void)
// {
//        unsigned int i =  23456782; 

//     int a = -2345;
//     int len =  0;
//     ft_puthexlow(i, &len);
//     write(1,"\n ", 2);
//     ft_puthexlow(a, &len);
//     write(1,"\n ", 2);
//     printf("%x , %x ", i, a);
//     // unsigned int n = 200039383;
//     // int len = 0;
//     // ft_puthexlow(n, &len); 
    
//     // printf("\n%x", n);
// }