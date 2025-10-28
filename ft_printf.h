/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:38:19 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/28 17:10:30 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_hexaprint(unsigned long long n, char *base);
int	ft_putunbr(unsigned int n);
int	ft_putnbr_base(unsigned long long nb, char *base);
int	ft_strlen(const char *str);
int	ft_putpoint(unsigned long long p);
int	ft_printf(const char *str, ...);

#endif