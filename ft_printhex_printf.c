/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bl4ckr0s33 <bl4ckr0s33@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:40:39 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/26 02:33:14 by bl4ckr0s33       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	ft_printhex_printf(const char *b, size_t r, size_t n, size_t *c)
{
	if (r < 2 || r > 16)
		return ;
	if (n >= r)
		ft_printhex_printf(b, r, n / r, c);
	ft_putchar_printf(b[n % r], c);
}
