/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:54:25 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/28 15:32:41 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaprint(unsigned long long n, char *base)
{
	char	*hexa;
	int		count;

	hexa = 0;
	count = 0;
	if (*base == 'X')
		hexa = "0123456789ABCDEF";
	else if (*base == 'x')
		hexa = "0123456789abcdef";
	count += ft_putnbr_base((long)n, hexa);
	return (count);
}

int	ft_putnbr_base(unsigned long long nb, char *base)
{
	unsigned long	len;
	int				count;

	count = 0;
	len = 0;
	while (base[len])
		len++;
	if (nb >= len)
	{
		count += ft_putnbr_base(nb / len, base);
		count += ft_putnbr_base(nb % len, base);
	}
	else
	{
		ft_putchar(base[nb]);
		count++;
	}
	return (count);
}
