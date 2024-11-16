/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:20:34 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/16 14:22:31 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libftprintf.h"

void ft_putchar(char c, int *len)
{
    write(1, &c, 1);
    (*len)++;
}


int main(void)
{
    int len = 0;
    ft_putchar('c', &len);
    printf("%d", len);

    return (0);
}