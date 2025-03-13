/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 07:47:35 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 02:57:05 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	ft_putnbr_printf(long nbr, size_t *count)
{
	if (nbr < 0)
	{
		ft_putchar_printf('-', count);
		nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar_printf(nbr + 48, count);
	else
	{
		ft_putnbr_printf(nbr / 10, count);
		ft_putchar_printf((nbr % 10) + 48, count);
	}
}

void	ft_putnbr_u_printf(unsigned int nbr, size_t *count)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchar_printf(nbr + 48, count);
	else
	{
		ft_putnbr_printf(nbr / 10, count);
		ft_putnbr_printf(nbr % 10, count);
	}
}
