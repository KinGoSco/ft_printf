/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:55:45 by nkhachab          #+#    #+#             */
/*   Updated: 2022/11/10 22:10:00 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr(long n);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_hexalower(unsigned int n);
int	ft_hexaupper(unsigned int n);
int	ft_ptr(unsigned long long n);

#endif
