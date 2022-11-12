/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:54:19 by nkhachab          #+#    #+#             */
/*   Updated: 2022/11/10 22:09:42 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_format(char s, va_list a)
{
	int	r;

	r = 0;
	if (s == 'c')
		r += ft_putchar(va_arg(a, int));
	else if (s == 's')
		r += ft_putstr(va_arg(a, char *));
	else if (s == 'd' || s == 'i')
		r += ft_putnbr(va_arg(a, int));
	else if (s == 'u')
		r += ft_putnbr(va_arg(a, unsigned int));
	else if (s == 'x')
		r += ft_hexalower(va_arg(a, unsigned int));
	else if (s == 'X')
		r += ft_hexaupper(va_arg(a, unsigned int));
	else if (s == 'p')
	{
		r += ft_putstr("0x");
		r += ft_ptr(va_arg(a, unsigned long long));
	}
	else if (s == '%')
		r += ft_putchar('%');
	return (r);
}

int	ft_printf(const char *s, ...)
{
	int		r;
	int		i;
	va_list	a;

	i = 0;
	r = 0;
	va_start(a, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			r += ft_format(s[i + 1], a);
			i++;
		}
		else
			r += ft_putchar(s[i]);
		i++;
	}
	va_end(a);
	return (r);
}
