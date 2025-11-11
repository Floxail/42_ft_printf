/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:24:39 by flvejux           #+#    #+#             */
/*   Updated: 2025/11/11 08:11:40 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arg(va_list args, char c, int len)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		len++;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	if (c == 'p')
		len += ft_putpoint(va_arg(args, unsigned long long));
	if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		len += ft_putunbr(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		len += ft_hexaprint(va_arg(args, unsigned int), &c);
	if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			while (str[i + 1] == ' ')
				i++;
			len = ft_arg(args, str[i + 1], len);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			len ++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

/* 
int	main(void)
{
	printf("V %llx ULLONG_max\n", 18446744073709551615);

	ft_printf("F %x ULLong_max\n", 18446744073709551615);
}
 */