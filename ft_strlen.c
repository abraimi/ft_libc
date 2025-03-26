/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bl4ckr0s33 <bl4ckr0s33@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:37:07 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/26 02:34:28 by bl4ckr0s33       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

size_t	ft_strlen(const char *s)
{
	size_t	idx;

	if (!s || !*s)
		return (0);
	idx = 0;
	while (s[idx] != '\0')
		idx++;
	return (idx);
}
