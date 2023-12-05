/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:59:30 by aroualid          #+#    #+#             */
/*   Updated: 2023/12/05 13:52:01 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>


int	ft_handle_p(void *ptr)
{
	int	len;

	len = 0;
	if (ptr != NULL)
	{
		write(1, "0x", 2);
		len = ft_putnbr_basep((uintptr_t)ptr, "0123456789abcdef") + 2;
	}
	else
	{
		len = write(1, "(nil)", 5);
	}
	return (len);
}

int	ft_print(const char *cc, va_list list)
{
	int		n;

	n = 0;
	if (*cc == 'c')
		n += ft_putchar((char)va_arg(list, int));
	if (*cc == 's')
		n += ft_putstr(va_arg(list, char *));
	if (*cc == 'p')
		n +=ft_handle_p(va_arg(list, void *));
	if (*cc == 'd')
		n += ft_putnbr(va_arg(list, int));
	if (*cc == 'i')
		n += ft_putnbr(va_arg(list, int));
	if (*cc == 'u')
		n += ft_putnbr(va_arg(list, unsigned int));
	if (*cc == 'x')
		n += ft_putnbr_base(va_arg(list, unsigned long), "0123456789abcdef");
	if (*cc == 'X')
		n += ft_putnbr_base(va_arg(list, unsigned long), "0123456789ABCDEF");
	if (*cc == '%')
		n += ft_putchar('%');
	return (n);
}

int	ft_printf(const	char *c, ...)
{
	size_t		i;
	va_list	list;
	int		j;

	i = 0;
	j = 0;
	va_start(list, c);
	while (i < ft_strlen(c))
	{
		if (c[i] == '%')
		{
			i++;
			j += ft_print(&c[i], list);
		}
		else
			j += ft_putchar(c[i]);
		i++;
	}
	va_end(list);
	return (j);
}
