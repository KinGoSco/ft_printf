/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:47:57 by nkhachab          #+#    #+#             */
/*   Updated: 2022/11/10 07:49:18 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalower(unsigned int n)
{
	unsigned int	res;
	unsigned int	s;
	int				count;

	count = 0;
	s = n;
	if (s == 0)
		count++;
	while (s != 0)
	{
		s = s / 16;
		count++;
	}
	if (n > 15)
		ft_hexalower(n / 16);
	res = n % 16;
	if (res > 9 && res < 16)
		ft_putchar(res + 87);
	else
		ft_putchar(res + 48);
	return (count);
}
