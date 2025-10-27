/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:24:39 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/27 14:24:03 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arg(va_list args, char c, int size)
{
	int	len;

	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	/* if (c == 'p')
		len += ft_putvoid(); */
	if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		len += ft_putunbr(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		len += ft_hexaprint(va_arg(args, int), (char *)c);
	if (c == '%')
		len += ft_putchar('%');
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
			ft_arg(args, i + 1, len);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(args);
}

int main()
{
	printf("vrais, %c char; %s string; %d decimal ; %i integer ; %u unsigned decimal ; %x lower exa; %X maj exa; %% poucent\n");
	
	ft_printf("vrais, %c char; %s string; %d decimal ; %i integer ; %u unsigned decimal ; %x lower exa; %X maj exa; %% poucent\n");
}