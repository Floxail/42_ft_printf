/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:10:24 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/28 13:15:14 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nb_size(long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

int	ft_uitoa(unsigned int n)
{
	int		len;
	int		i;
	char	*nb;

	i = 0;

	len = nb_size(n);
	nb = malloc(sizeof(char) * (len + 1));
	if (!nb)
		return (0);
	nb[len] = '\0';
	if (n == 0)
		nb[i] = '0';
	if (n < 0)
	{
		nb[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		nb[(len - 1) - i++] = (n % 10) + '0';
		n /= 10;
	}
	return (len);
}
