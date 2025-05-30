/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolo <gnicolo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:00:12 by gnicolo           #+#    #+#             */
/*   Updated: 2025/01/17 10:56:00 by gnicolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)

{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s && s[i] != '\0')
		i++;
	return (i);
}
