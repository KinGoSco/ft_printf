/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:44:33 by nkhachab          #+#    #+#             */
/*   Updated: 2022/11/10 08:03:28 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaupper(unsigned int n)
{
	unsigned int	s;
	unsigned int	res;
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
		ft_hexaupper(n / 16);
		res = n % 16;
	if (res > 9 && res < 16)
		ft_putchar (res + 55);
	else
		ft_putchar(res + 48);
	return (count);
}
