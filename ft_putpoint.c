/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:12:43 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/31 10:07:28 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpoint(unsigned long long p)
{
	int	len;

	len = 0;
	if (p == 0)
		return (ft_putstr("(nil)"));
	else
	{
		len += ft_putstr("0x");
		len += ft_hexaprint(p, "x");
	}
	return (len);
}
