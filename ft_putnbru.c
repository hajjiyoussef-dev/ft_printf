/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 23:41:30 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/17 01:30:05 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"



void ft_putnbru(unsigned int nbr, int *len)
{
    if (nbr >= 10)
    {
        ft_putnbru(nbr / 10, len);
        ft_putchar((nbr % 10) + '0', len);
    }
    else
        ft_putchar((nbr + '0'), len);
         
} 

int main(void)
{
    unsigned int a = 4294967295;
    int u = -42 ;
    int len = 0 ;
    
    ft_putnbru(a, &len);
    write(1,"\n ", 2);
    ft_putnbru(u, &len);
    return (0) ;
}