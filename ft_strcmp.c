/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bl4ckr0s33 <bl4ckr0s33@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 06:10:57 by bl4ckr0s33        #+#    #+#             */
/*   Updated: 2025/03/13 06:12:44 by bl4ckr0s33       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int strcmp(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}