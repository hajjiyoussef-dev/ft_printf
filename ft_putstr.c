/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 02:11:40 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/16 18:23:02 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_putstr(char *str, int *len)
{
    int i;

    i = 0;
    if (str == NULL)
    {
        ft_putstr("(null)", len);
        return;
    }
    while (str[i] != '\0')
    {
        ft_putchar(str[i], len);
        i++;
    }
}

// int main(void)
// {
//     int len = 0 ;
//     ft_putstr(NULL, &len);
//     printf(" \n %d", len);
//     return (0);
// }