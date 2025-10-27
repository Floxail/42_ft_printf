/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:43:04 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/27 14:27:31 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nbr;
	long	len;

	len = ft_strlen(n);
	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	int		len;
	char	*nb;

	if (n == 0)
		ft_putchar('0');
	nb = ft_putnbr(n);
	len = ft_putstr(nb);
	return (len);
}
