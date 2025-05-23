/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 05:27:26 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 03:02:41 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (!dst || !dstsize)
		return (srcsize + dstsize);
	idx = 0;
	while (src[idx] != '\0' && idx < dstsize - 1)
	{
		*dst++ = src[idx];
		idx++;
	}
	*dst = '\0';
	return (srcsize);
}
