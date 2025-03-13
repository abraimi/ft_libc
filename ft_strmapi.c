/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:57:15 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 03:03:16 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	size_t			size;
	char			*p;

	size = ft_strlen(s);
	p = (char *)malloc(size + 1);
	if (!p)
		return (NULL);
	idx = 0;
	while (s[idx] != '\0' && idx < size)
	{
		p[idx] = (*f)(idx, s[idx]);
		idx++;
	}
	p[idx] = '\0';
	return (p);
}
