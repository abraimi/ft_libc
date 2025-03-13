/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 07:46:48 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 02:56:03 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	ft_putstr_printf(char *str, size_t *count)
{
	if (!str)
	{
		ft_putstr_printf("(null)", count);
		return ;
	}
	while (*str)
		ft_putchar_printf(*str++, count);
}
