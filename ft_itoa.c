/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:03:17 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/13 03:01:33 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

static int	digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*asc;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = digits(n);
	if (len == 0 || n == 0)
		return (ft_strdup("0"));
	asc = (char *)malloc(len + 1);
	if (!asc)
		return (NULL);
	if (n < 0)
	{
		asc[0] = '-';
		n *= -1;
	}
	asc[len] = '\0';
	while (len > 0 && n > 0)
	{
		asc[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (asc);
}
