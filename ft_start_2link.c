/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_2link.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolo <gnicolo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:55:48 by gnicolo           #+#    #+#             */
/*   Updated: 2025/02/14 19:03:40 by gnicolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_start_2link(t_list **lst)
{
	t_list *current;

	current = *lst;
	while (current)
	{
        if (current->next)
			current->next->prev = current;
		current = current->next;
	}
}
