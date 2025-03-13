/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:40:39 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 02:58:00 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	ft_printhex_printf(const char *base, size_t radix, size_t nbr, size_t *count)
{
	if (radix < 2 || radix > 16)
		return ;
	if (nbr >= radix)
		ft_printhex_printf(base, radix, nbr / radix, count);
	ft_putchar_printf(base[nbr % radix], count);
}
