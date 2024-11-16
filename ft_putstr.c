/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 02:11:40 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/16 14:14:19 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_putstr(char *str, int *len)
{
    if (str == NULL)
    {
       ft_putchar("null", len);
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
    int len = 0 ;
    ft_putstr("youssef \n", &len);
    printf("%d", len);
    return (0);
}