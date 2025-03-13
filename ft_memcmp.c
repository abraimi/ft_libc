/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:33:14 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 03:01:41 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				idx;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	idx = 0;
	while (idx < n)
	{
		if (p1[idx] != p2[idx])
			return (p1[idx] - p2[idx]);
		idx++;
	}
	return (0);
}
