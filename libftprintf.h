/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:06:41 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/16 02:36:49 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H 

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c, int *len);
void ft_putstr(char *str, int *len);

#endif