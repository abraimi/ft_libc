/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 04:53:37 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 02:59:59 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_s;
	size_t			idx;

	ptr_s = (unsigned char *)s;
	idx = 0;
	while (idx < n)
	{
		ptr_s[idx] = 0;
		idx++;
	}
}
