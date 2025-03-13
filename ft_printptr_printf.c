/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 07:18:01 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 02:58:37 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	ft_printptr_printf(unsigned long ptr, size_t *count)
{
	ft_putstr_printf("0x", count);
	ft_printhex_printf("0123456789abcdef", 16, ptr, count);
}
