/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 23:42:28 by abraimi           #+#    #+#             */
/*   Updated: 2025/03/31 23:42:42 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*copy;
	t_list	*next;

	if (!lst)
		return ;
	copy = *lst;
	while (copy)
	{
		next = copy->next;
		free(copy);
		copy = next;
	}
	*lst = NULL;
}
