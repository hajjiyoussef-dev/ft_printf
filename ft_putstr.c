/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 02:11:40 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/16 03:01:30 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_putstr(char *str, int *len)
{
    if (!str)
    {
        *len += write(1, "(null)", 6);
        return ;
    }
    while (*str)
    {
        ft_putchar(*str, len);
        str++;
    }   
}


int main(void)
{
    ft_putstr("youssef", 0);
}