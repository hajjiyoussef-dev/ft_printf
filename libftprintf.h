/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:06:41 by yhajji            #+#    #+#             */
/*   Updated: 2024/11/17 00:49:21 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H 

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *forma, ...);
void ft_putchar(char c, int *len);
void ft_putstr(char *str, int *len);
void ft_putnbr(int nbr, int *len);
void    ft_putadd(void *ptr, int *len);
void ft_putnbru(unsigned int nbr, int *len);
void ft_puthexlow(unsigned int nbr , int *len);
void ft_puthexup(unsigned int nbr, int *len);


#endif