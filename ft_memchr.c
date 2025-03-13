/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:04:24 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 03:01:38 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	size_t			idx;

	ps = (unsigned char *)s;
	idx = 0;
	while (idx < n)
	{
		if (ps[idx] == (unsigned char)c)
			return (&(ps)[idx]);
		idx++;
	}
	return (NULL);
}
