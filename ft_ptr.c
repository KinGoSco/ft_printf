/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:56:08 by nkhachab          #+#    #+#             */
/*   Updated: 2022/11/10 22:09:34 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_ptr(unsigned long long n)
{
	unsigned long	s;
	unsigned long	res;
	int				count;

	s = n;
	count = 0;
	if (s == 0)
	count++;
	while (s != 0)
	{
		s = s / 16;
		count++;
	}
	if (n > 15)
		ft_ptr(n / 16);
	res = n % 16;
	if (res >= 10 && res < 16)
		ft_putchar(res + 87);
	else
		ft_putchar(res + 48);
	return (count);
}
